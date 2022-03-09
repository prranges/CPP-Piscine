/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:47:42 by prranges          #+#    #+#             */
/*   Updated: 2022/03/09 17:07:23 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNum(0)
{}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::Fixed(const int num) : _fixedPointNum(roundf(num * (1 << this->_fractionalBits)))
{}

Fixed::Fixed (const float num) : _fixedPointNum(roundf(num * (1 << this->_fractionalBits)))
{}

Fixed &Fixed::operator= (const Fixed &fixed)
{
    if (this != &fixed)
        _fixedPointNum = fixed.getRawBits();
    return (*this);
}

std::ostream &operator<< (std::ostream &out, Fixed const &fixed)
{
    return (out << fixed.toFloat());
}

bool Fixed::operator> (const Fixed &fixed) const
{
    return (this->_fixedPointNum > fixed._fixedPointNum);
}

bool Fixed::operator< (const Fixed &fixed) const
{
    return (this->_fixedPointNum < fixed._fixedPointNum);
}

bool Fixed::operator>= (const Fixed &fixed) const
{
    return (this->_fixedPointNum >= fixed._fixedPointNum);
}

bool Fixed::operator<= (const Fixed &fixed) const
{
    return (this->_fixedPointNum <= fixed._fixedPointNum);
}

bool Fixed::operator== (const Fixed &fixed) const
{
    return (this->_fixedPointNum == fixed._fixedPointNum);
}

bool Fixed::operator!= (const Fixed &fixed) const
{
    return (this->_fixedPointNum != fixed._fixedPointNum);
}

Fixed Fixed::operator+ (const Fixed &fixed) const
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator- (const Fixed &fixed) const
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator* (const Fixed &fixed) const
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/ (const Fixed &fixed) const
{
    return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++ (void)
{
    ++this->_fixedPointNum;
    return (*this);
}

Fixed &Fixed::operator-- (void)
{
    --this->_fixedPointNum;
    return (*this);
}

Fixed Fixed::operator++ (int)
{
    Fixed tmp = *this;
    ++this->_fixedPointNum;
    return (tmp);
}

Fixed Fixed::operator-- (int)
{
    Fixed tmp = *this;
    --this->_fixedPointNum;
    return (tmp);
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
    _fixedPointNum = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)(_fixedPointNum) / (float)(1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_fixedPointNum >> _fractionalBits);
}

Fixed::~Fixed()
{}

Fixed &Fixed::min (Fixed &a, Fixed &b)
{
    return (a <= b ? a : b);
}

Fixed &Fixed::max (Fixed &a, Fixed &b)
{
    return (a >= b ? a : b);
}

const Fixed &Fixed::min (const Fixed &a, const Fixed &b)
{
    return (a <= b ? a : b);
}

const Fixed &Fixed::max (const Fixed &a, const Fixed &b)
{
    return (a >= b ? a : b);
}