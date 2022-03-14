/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:22:55 by prranges          #+#    #+#             */
/*   Updated: 2022/03/11 14:06:27 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap dog("Dog");
    
    ClapTrap cat(dog);
    cat.setName("Cat");

    dog.attack(cat.getName());
    cat.takeDamage(2);
    cat.beRepaired(1);
    cat.attack(dog.getName());
    dog.takeDamage(3);
    dog.beRepaired(2);

    dog.attack(cat.getName());
    cat.takeDamage(3);
    cat.beRepaired(1);
    cat.attack(dog.getName());
    dog.takeDamage(2);
    dog.beRepaired(1);

    for (int i = 0; i < 10; ++i)
        cat.attack(dog.getName());
    
    return (0);
}