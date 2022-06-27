#include "Fixed.hpp"

Fixed::Fixed()
{
	_n = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x)
{
	_n = x << _fix;
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(const float x)
{
	_n = roundf(x * (1 << _fix));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &src)
{
	if (this != &src)
		_n = src.getRawBits();
	std::cout << "Copy assigment called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	_n = raw;
}

int Fixed::toInt() const
{
	return (_n >> _fix);
}

float Fixed::toFloat() const
{
	return (_n / static_cast<float>(1 << _fix));
}

std::ostream& operator << (std::ostream& out,  const Fixed &src)
{
	out << src.toFloat();
	return (out);
}