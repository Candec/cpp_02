#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:

	Fixed();
	Fixed(const int x);
	Fixed(const float x);
	Fixed(const Fixed &src);
	~Fixed();

	Fixed &operator = (const Fixed &src);
	
	// bool operator > (const Fixed &src);
	// bool operator < (const Fixed &src);
	// bool operator >= (const Fixed &src);
	// bool operator <= (const Fixed &src);
	// bool operator == (const Fixed &src);
	// bool operator != (const Fixed &src);

	// Fixed operator + (const Fixed &src);
	// Fixed operator - (const Fixed &src);
	// Fixed operator * (const Fixed &src);
	// Fixed operator / (const Fixed &src);

	// Fixed operator ++ ();
	// Fixed operator ++ (int);
	// Fixed operator -- ();
	// Fixed operator -- (int);

	// static Fixed& min(Fixed &a, Fixed &b);
	// static Fixed& max(Fixed &a, Fixed &b);
	// static const Fixed& min(const Fixed &a, const Fixed &b);
	// static const Fixed& max(const Fixed &a, const Fixed &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	int toInt() const;
	float toFloat() const;

	private:

	int _n;
	static const int _fix = 8;

};

std::ostream& operator << (std::ostream& out,  const Fixed &src);

#endif