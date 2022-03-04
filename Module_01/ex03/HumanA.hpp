/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:47:10 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 18:35:35 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string _name;
        const Weapon &_weapon;
    public:
        HumanA(std::string name, const Weapon &weapon);
        ~HumanA();

        void attack(void) const;
};

#endif