/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:23:21 by prranges          #+#    #+#             */
/*   Updated: 2022/03/11 19:10:30 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) 
{
    *this = fragtrap;
    std::cout << "FragTrap " << fragtrap._name << " was copied" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &fragtrap)
{
    if (this != &fragtrap) 
    {
        _name = fragtrap._name;
        _hitPoints = fragtrap._hitPoints;
        _energyPoints = fragtrap._energyPoints;
        _attackDamage = fragtrap._attackDamage;
    }
    std::cout << "FragTrap " << fragtrap._name << " assignment operator called" << std::endl;

    return (*this);
}

std::ostream &operator<< (std::ostream &out, FragTrap const &fragtra)
{
	return (out << fragtra.getName());
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        --_energyPoints;
        std::cout << "FragTrap " << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
    }
    else
    {
        if (_energyPoints == 0)
            std::cout << "FragTrap " << this->_name << " has no energy points to attack " << target << std::endl;
        else if (_hitPoints <= 0)
            std::cout << "FragTrap " << this->_name << " is dead, can't attack " << target << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " High five, Guys!" << std::endl;
}