/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:27 by prranges          #+#    #+#             */
/*   Updated: 2022/03/13 18:16:17 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator= (const Cat &cat)
{
    if (this != &cat)
    {
        _type = cat._type;
        if (cat.getBrain())
            _brain = new Brain(*cat.getBrain());
    }
    std::cout << "Cat operator= called" << std::endl;

    return (*this);
}

void Cat::makeSound() const 
{
    std::cout << "Meow Meow Meow" << std::endl;
}

std::string Cat::getType() const
{
    return (_type);
}

Brain *Cat::getBrain() const
{
	if (_brain)
		return (_brain);
	return (NULL);
}