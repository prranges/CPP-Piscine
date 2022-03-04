/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:48:57 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 15:42:40 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zs = new Zombie[N];

    for (int i = 0; i < N; i++)
        zs[i].setName(name + "_" + std::to_string(i));
    return (zs);
}