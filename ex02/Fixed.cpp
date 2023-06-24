#include "Fixed.hpp"

Fixed::Fixed() : _fixvalue(0) {
}

Fixed::Fixed( const int value ) : _fixvalue(value << this->_bit) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _fixvalue(roundf(value * (1 << this->_bit))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits( void ) const {
	return (this->_fixvalue);
}

void Fixed::setRawBits( int const raw ) {
	this->_fixvalue = raw;
}

float Fixed::toFloat( void ) const {
	float floatValue = (float)this->_fixvalue / (1 << this->_bit);
	return floatValue;
}

int Fixed::toInt( void ) const {
	return this->_fixvalue >> this->_bit;
}

std::ostream &operator<<( std::ostream& os, const Fixed &value ) {
	os << value.toFloat();
	return os;
}

bool Fixed::operator>( const Fixed &fixed ) const {
	return (this->_fixvalue > fixed.getRawBits());
}

bool Fixed::operator<( const Fixed &fixed ) const {
	return (this->_fixvalue < fixed.getRawBits());
}

bool Fixed::operator>=( const Fixed &fixed ) const {
	return (this->_fixvalue >= fixed.getRawBits());
}

bool Fixed::operator<=( const Fixed &fixed ) const {
	return (this->_fixvalue <= fixed.getRawBits());
}

bool Fixed::operator==( const Fixed &fixed ) const {
	return (this->_fixvalue == fixed.getRawBits());
}

bool Fixed::operator!=( const Fixed &fixed ) const {
	return (this->_fixvalue != fixed.getRawBits());
}

Fixed &Fixed::max( Fixed &num1, Fixed &num2 ) {
	return (num1 > num2 ? num1 : num2);
}

const Fixed &Fixed::max( const Fixed &num1, const Fixed &num2 ) {
	return (num1 > num2 ? num1 : num2);
}

Fixed &Fixed::min( Fixed &num1, Fixed &num2 ) {
	return (num1 < num2 ? num1 : num2);
}

const Fixed &Fixed::min( const Fixed &num1, const Fixed &num2 ) {
	return (num1 < num2 ? num1 : num2);
}
