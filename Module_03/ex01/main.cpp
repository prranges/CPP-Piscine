/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:22:55 by prranges          #+#    #+#             */
/*   Updated: 2022/03/11 16:58:51 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap dog("Dog");
    
    ScavTrap cat(dog);
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

    dog.guardGate();
    cat.guardGate();
    
    return (0);
}