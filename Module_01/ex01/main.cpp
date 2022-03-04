/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:48:32 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 15:42:56 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 8;

    Zombie *zs = zombieHorde(N, "Fred");

    for (int i = 0; i < N; i++)
        zs[i].announce();

    delete [] (zs);
    return (0);
}