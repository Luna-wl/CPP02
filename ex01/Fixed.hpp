#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private:
		int _value;
		static const int _bit = 8;
	public:
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif