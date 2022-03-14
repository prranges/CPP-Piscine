/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:21 by prranges          #+#    #+#             */
/*   Updated: 2022/03/12 20:21:42 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator= (const Animal &animal)
{
    if (this != &animal) 
        _type = animal._type;

    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound!!!" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}