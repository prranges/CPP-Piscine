/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:16:47 by prranges          #+#    #+#             */
/*   Updated: 2022/03/05 15:06:16 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen karen;

    if (ac != 2)
    {
        std::cerr << "Error: Use 1 argument!" << std::endl;
        return (1);
    }
    
    karen.complain(av[1]);
    
    return (0);
}