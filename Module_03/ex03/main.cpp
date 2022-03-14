/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:22:55 by prranges          #+#    #+#             */
/*   Updated: 2022/03/11 19:09:42 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dog("Dog");
    
    DiamondTrap cat("Cat");

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
    cat.highFivesGuys();
    cat.guardGate();
    dog.highFivesGuys();
    
    cat.whoAmI();
    dog.whoAmI();
    
    return (0);
}