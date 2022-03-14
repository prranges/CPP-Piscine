/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:23:11 by prranges          #+#    #+#             */
/*   Updated: 2022/03/11 17:23:30 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) 
{
    *this = scavtrap;
    std::cout << "ScavTrap " << scavtrap._name << " was copied" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &scavtrap)
{
    if (this != &scavtrap) 
    {
        _name = scavtrap._name;
        _hitPoints = scavtrap._hitPoints;
        _energyPoints = scavtrap._energyPoints;
        _attackDamage = scavtrap._attackDamage;
    }
    std::cout << "ScavTrap " << scavtrap._name << " assignment operator called" << std::endl;

    return (*this);
}

std::ostream &operator<< (std::ostream &out, ScavTrap const &scavtrap)
{
	return (out << scavtrap.getName());
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->getName() << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        --_energyPoints;
        std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
    }
    else
    {
        if (_energyPoints == 0)
            std::cout << "ScavTrap " << this->_name << " has no energy points to attack " << target << std::endl;
        else if (_hitPoints <= 0)
            std::cout << "ScavTrap " << this->_name << " is dead, can't attack " << target << std::endl;
    }
}

void ScavTrap::ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->getName() << " enterred in Gate keeper mode!" << std::endl;
}