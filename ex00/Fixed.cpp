#include "Fixed.hpp"

Fixed::Fixed() {
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw ) {
	this->_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &value ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = getRawBits();
	return *this;
}