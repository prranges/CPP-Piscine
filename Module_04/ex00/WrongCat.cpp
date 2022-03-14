/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:27 by prranges          #+#    #+#             */
/*   Updated: 2022/03/12 20:22:12 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    *this = wrongcat;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &wrongcat)
{
    if (this != &wrongcat) 
        _type = wrongcat._type;

    return (*this);
}

void WrongCat::makeSound() const 
{
    std::cout << "Meow Meow Meow" << std::endl;
}

std::string WrongCat::getType() const
{
    return (_type);
}