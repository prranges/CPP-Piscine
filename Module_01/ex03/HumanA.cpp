/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:47:07 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 18:39:27 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, const Weapon &weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack(void) const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}