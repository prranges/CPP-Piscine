/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:47:07 by prranges          #+#    #+#             */
/*   Updated: 2022/03/09 13:53:25 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNum(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int num) : _fixedPointNum(roundf(num * (1 << this->_fractionalBits)))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float num) : _fixedPointNum(roundf(num * (1 << this->_fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &fixed)
        _fixedPointNum = fixed.getRawBits();
    return (*this);
}

std::ostream &operator<< (std::ostream &out, Fixed const &fixed)
{
    return (out << fixed.toFloat());
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
{
    std::cout << "Destructor called" << std::endl;
}