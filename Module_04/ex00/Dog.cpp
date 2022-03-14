/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:33 by prranges          #+#    #+#             */
/*   Updated: 2022/03/12 20:22:01 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator= (const Dog &dog)
{
    if (this != &dog) 
        _type = dog._type;

    return (*this);
}

void Dog::makeSound() const 
{
	std::cout << "Gouw Gouw Gouw" << std::endl;
}

std::string Dog::getType() const
{
    return (_type);
}