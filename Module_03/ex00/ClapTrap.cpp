/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:22:48 by prranges          #+#    #+#             */
/*   Updated: 2022/03/10 18:32:13 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) 
{
    *this = claptrap;
    std::cout << "ClapTrap " << claptrap._name << " was copied" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &claptrap)
{
    if (this != &claptrap) 
    {
        _name = claptrap._name;
        _hitPoints = claptrap._hitPoints;
        _energyPoints = claptrap._energyPoints;
        _attackDamage = claptrap._attackDamage;
    }
    std::cout << "ClapTrap " << claptrap._name << " assignment operator called" << std::endl;

    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name  << " destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << this->getName() << "attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "damage " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "repair " << amount << std::endl; 
}