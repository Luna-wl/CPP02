#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	return 0;
}

// Default constructor called A
// Copy constructor called B
// Copy assignment operator called B
// getRawBits member function called B
// Default constructor called C
// Copy assignment operator called C
// getRawBits member function called C
// Destructor called C
// Destructor called B
// Destructor called A