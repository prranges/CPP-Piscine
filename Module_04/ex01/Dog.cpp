/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:33 by prranges          #+#    #+#             */
/*   Updated: 2022/03/13 18:54:17 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator= (const Dog &dog)
{
    if (this != &dog) 
    {
        _type = dog.getType();
        if (dog.getBrain())
        {
            delete _brain;
            _brain = new Brain(*dog.getBrain());
        }
    }
    std::cout << "Dog operator= called" << std::endl;

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

Brain *Dog::getBrain() const
{
	if (_brain)
		return (_brain);
	return (NULL);
}