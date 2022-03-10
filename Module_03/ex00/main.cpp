/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:22:55 by prranges          #+#    #+#             */
/*   Updated: 2022/03/10 18:07:35 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap dog("Dog");
    
    ClapTrap cat(dog);
    cat.setName("Cat");

    dog.attack(cat.getName());
    cat.takeDamage(2);
    cat.beRepaired(3);
    dog.attack(dog.getName());
    dog.takeDamage(4);
    dog.beRepaired(2);
    
    return (0);
}