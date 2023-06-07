#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private:
		int _fixvalue;
		static const int _bit = 8;
	public:
		Fixed();
		~Fixed();
		// copy construct
		Fixed( const Fixed &num );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator=( const Fixed &value );
};

#endif