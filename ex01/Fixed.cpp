#include "Fixed.hpp"

Fixed::Fixed() {
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value ) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toFloat( void ) const {
	float floatValue;
}

int Fixed::toInt( void ) const {
	int intValue;
}