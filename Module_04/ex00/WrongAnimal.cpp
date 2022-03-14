/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:21 by prranges          #+#    #+#             */
/*   Updated: 2022/03/12 20:22:07 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    *this = wronganimal;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &wronganimal)
{
    if (this != &wronganimal) 
        _type = wronganimal._type;

    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Animal sound!!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}