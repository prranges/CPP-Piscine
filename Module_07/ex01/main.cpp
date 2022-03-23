/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:28:50 by d1ma5             #+#    #+#             */
/*   Updated: 2022/03/23 10:20:46 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

int main(void)
{
    int arrayI[] = {0, 1, 2, 3, 4, 5};
    std::string arrayS[] = {"zero", "one", "two", "three", "four", "five"};
    float arrayF[] = {-21.42, -0.42, 0.21, 0.42, 21.42, 42.21};

    ::iter<int>(arrayI, 6, print);
    std::cout << std::endl;
    ::iter<std::string>(arrayS, 6, print);
    std::cout << std::endl;
    ::iter<float>(arrayF, 6, print);
    std::cout << std::endl;

    /////////////////////
    // int tab[] = {0, 1, 2, 3, 4};
    // Awesome tab2[5];
    
    // ::iter(tab, 5, print);
    // iter(tab2, 5, print);
    // std::cout << std::endl;
    /////////////////////

    return (0);
}