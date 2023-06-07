#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int _fixvalue;
		static const int _bit = 8;
	public:
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed &copy );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &operator=( const Fixed &value );
		bool operator>( const Fixed &fixed ) const;
		bool operator<( const Fixed &fixed ) const;
		bool operator>=( const Fixed &fixed ) const;
		bool operator<=( const Fixed &fixed ) const;
		bool operator==( const Fixed &fixed ) const;
		bool operator!=( const Fixed &fixed ) const;

};

std::ostream &operator<<( std::ostream& os, const Fixed &value );

#endif