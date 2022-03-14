/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:39 by prranges          #+#    #+#             */
/*   Updated: 2022/03/13 18:59:23 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    // Animal test;

    std::cout << std::endl;

    Animal *animal[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < 10; i++)
        animal[i]->makeSound();
        
    for (int i = 0; i < 10; i++)
        delete animal[i];

    std::cout << std::endl;

    Dog a;
	Dog b(a);
    
	Cat c;
	Cat d(c);

	a = b;
	// c = d;

    
    return 0;
}