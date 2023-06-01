#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private:
		int _value;
		static const int _bit = 8;
	public:
		Fixed();
		~Fixed();
		// copy construct
		Fixed( const Fixed &num );
		Fixed &operator=( const Fixed &copy );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif