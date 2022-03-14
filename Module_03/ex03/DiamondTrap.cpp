/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:40:05 by prranges          #+#    #+#             */
/*   Updated: 2022/03/11 19:03:18 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl; 
}

DiamondTrap::DiamondTrap(const std::string &name) 
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamodTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &diamondtrap)
{
    std::cout << diamondtrap << std::endl;
    std::cout << "DiamondTrap " << diamondtrap._name << " assignment operator called" << std::endl;

    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->getName() << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() 
{
    std::cout << "My name is " << this->_name << " and my Parents name is " << ClapTrap::_name << std::endl;
}