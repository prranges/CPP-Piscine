/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:17:23 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 14:44:39 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("Alex");
    z1->announce();
    delete (z1);

    Zombie z2 = Zombie("Peter");
    z2.announce();

    randomChump("George");

    return (0);
}