/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:47:38 by prranges          #+#    #+#             */
/*   Updated: 2022/03/09 16:27:33 by prranges         ###   ########.fr       */
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

        bool operator> (const Fixed &fixed) const;
        bool operator< (const Fixed &fixed) const;
        bool operator>= (const Fixed &fixed) const;
        bool operator<= (const Fixed &fixed) const;
        bool operator== (const Fixed &fixed) const;
        bool operator!= (const Fixed &fixed) const;

        Fixed operator+ (const Fixed &fixed) const;
        Fixed operator- (const Fixed &fixed) const;
        Fixed operator* (const Fixed &fixed) const;
        Fixed operator/ (const Fixed &fixed) const;

        Fixed &operator++ (void);
        Fixed &operator-- (void);
        Fixed operator++ (int);
        Fixed operator-- (int);

        static Fixed &min (Fixed &a, Fixed &b);
        static Fixed &max (Fixed &a, Fixed &b);
        static const Fixed &min (const Fixed &a, const Fixed &b);
        static const Fixed &max (const Fixed &a, const Fixed &b);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<< (std::ostream &out, Fixed const &fixed);

#endif