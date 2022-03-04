/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:47:17 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 18:37:46 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        std::string _name;
        const Weapon *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();

        void setWeapon(const Weapon &weapon);
        void attack(void) const;
};

#endif