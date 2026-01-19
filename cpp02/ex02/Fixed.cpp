#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int n)
{
	value = n << fracBits;
}

Fixed::Fixed(const float n)
{
	value = roundf(n * (1 << fracBits));
}

Fixed::Fixed(const Fixed &other)
{
	value = other.value;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		value = other.value;
	return (*this);
}

Fixed::~Fixed() {}

float Fixed::toFloat(void) const
{
	return ((float)value / (1 << fracBits));
}

int Fixed::toInt(void) const
{
	return (value >> fracBits);
}


bool Fixed::operator>(const Fixed &o) const
{ return (value > o.value); }

bool Fixed::operator<(const Fixed &o) const
{ return (value < o.value); }

bool Fixed::operator>=(const Fixed &o) const
{ return (value >= o.value); }

bool Fixed::operator<=(const Fixed &o) const
{ return (value <= o.value); }

bool Fixed::operator==(const Fixed &o) const
{ return (value == o.value); }

bool Fixed::operator!=(const Fixed &o) const
{ return (value != o.value); }


Fixed Fixed::operator+(const Fixed &o) const
{
	Fixed r;
	r.value = value + o.value;
	return (r);
}

Fixed Fixed::operator-(const Fixed &o) const
{
	Fixed r;
	r.value = value - o.value;
	return (r);
}

Fixed Fixed::operator*(const Fixed &o) const
{
	Fixed r;
	long long temp = (long long)value * (long long)o.value;
	r.value = (int)temp >> fracBits;
	return (r);
}

Fixed Fixed::operator/(const Fixed &o) const
{
	Fixed r;
	long long temp = (long long)(value << fracBits) / (long long)o.value;
	r.value = (int)temp;
	return (r);
}


Fixed &Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	value--;
	return (tmp);
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
