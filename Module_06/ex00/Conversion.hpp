/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:30:46 by prranges          #+#    #+#             */
/*   Updated: 2022/03/17 13:06:14 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>

class Conversion
{
    private:
        std::string _num;
        
    public:
        Conversion();
        Conversion(std::string num);
        Conversion(Conversion const &conversion);
        ~Conversion();

        Conversion &operator= (const Conversion &conversion);

        std::string getNum() const;

        int toInt() const;
        char toChar() const;
        float toFloat() const;
        double toDouble() const;
};

std::ostream &operator<< (std::ostream &out, Conversion const &conversion);

#endif