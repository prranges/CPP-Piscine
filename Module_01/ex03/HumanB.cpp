/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:47:14 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 18:39:32 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(const Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void) const
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}