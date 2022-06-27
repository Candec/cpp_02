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
	Fixed &operator = (const Fixed &src);
	~Fixed();

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