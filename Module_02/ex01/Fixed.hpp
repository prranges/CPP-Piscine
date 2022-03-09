/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:47:11 by prranges          #+#    #+#             */
/*   Updated: 2022/03/09 13:37:04 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixedPointNum;
	    static const int _fractionalBits = 8;
    
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int num);
        Fixed (const float num);
        ~Fixed();
        Fixed &operator= (const Fixed &fixed);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<< (std::ostream &out, Fixed const &fixed);

#endif