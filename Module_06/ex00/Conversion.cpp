/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:30:49 by prranges          #+#    #+#             */
/*   Updated: 2022/03/18 12:06:00 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <cmath>

Conversion::Conversion(std::string num) : _num(num)
{}

Conversion::Conversion(Conversion const &conversion)
{
    *this = conversion;
}

Conversion::~Conversion()
{}

Conversion &Conversion::operator= (const Conversion &conversion)
{
    if (this != &conversion)
        _num = conversion._num;
    return (*this);
}

std::string Conversion::getNum() const
{
    return (_num);
}

int Conversion::toInt() const
{
    return (static_cast<int>(toFloat()));
}

char Conversion::toChar() const
{
    return (static_cast<char>(toFloat()));
}

float Conversion::toFloat() const
{
    return (atof(_num.c_str()));
}

double Conversion::toDouble() const
{
    return (static_cast<double>(toFloat()));
}

std::ostream &operator<< (std::ostream &out, Conversion const &conversion)
{

    if (!isinf(conversion.toFloat()) && !isnan(conversion.toFloat()) && !isprint(conversion.toChar()))
		out << "char:\tnon displayable" << std::endl;
	else if (isprint(conversion.toChar()))
		out << "char:\t" << conversion.toChar() << std::endl;
	else
		out << "char:\timpossible" << std::endl;
    
    if (conversion.toFloat() <= INT_MAX && conversion.toFloat() >= INT_MIN)
        out << "int:\t" << conversion.toInt() << std::endl;
    else
        out << "int:\timpossible" << std::endl;
    
    if (conversion.toFloat() - conversion.toInt() == 0)
    {
        out << "float:\t" << conversion.toFloat() << ".0f" << std::endl;
        out << "double:\t" << conversion.toDouble() << ".0" << std::endl;
    }
    else
    {
        out << "float:\t" << conversion.toFloat() << "f" << std::endl;
        out << "double:\t" << conversion.toDouble() << std::endl;
    }
    return (out);
}