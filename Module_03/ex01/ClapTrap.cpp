/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:22:48 by prranges          #+#    #+#             */
/*   Updated: 2022/03/11 17:16:57 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->getName() << " destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

int ClapTrap::getHitPoints()
{
    return (_hitPoints);
}

int ClapTrap::getEnergyPoints()
{
    return (_energyPoints);
}

int ClapTrap::getAttackDamage()
{
    return (_attackDamage);
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        --_energyPoints;
        std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
    }
    else
    {
        if (_energyPoints == 0)
            std::cout << "ClapTrap " << this->_name << " has no energy points to attack " << target << std::endl;
        else if (_hitPoints <= 0)
            std::cout << "ClapTrap " << this->_name << " is dead, can't attack " << target << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        _hitPoints -= amount;
        if (_hitPoints < 0)
            _hitPoints = 0;
        std::cout << "ClapTrap " << this->getName() << " take damage - " << amount << " points" << std::endl;
        if (_hitPoints == 0)
            std::cout << "ClapTrap " << this->getName() << " is already dead, can't take damage" << std::endl;
        else
            std::cout << "ClapTrap " << this->getName() << " has " << this->_hitPoints << " hit points" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " is already dead, can't take damage" << std::endl;
        
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _hitPoints += amount;
        --_energyPoints;
        std::cout << "ClapTrap " << this->getName() << " be repair - " << amount << " hit points" << std::endl;
        std::cout << "ClapTrap " << this->getName() << " now have - " << this->_hitPoints << " hit points and " << this->_energyPoints << " energy points" << std::endl;
    }
    else
    {
        if (_hitPoints <= 0)
            std::cout << "ClapTrap " << this->getName() << " is dead, can't be repaired" << std::endl;
        else if (_energyPoints <= 0)
            std::cout << "ClapTrap " << this->getName() << " can't be repaired - has no energy points" << std::endl;
    }
}

