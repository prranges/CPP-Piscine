/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:44:20 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 16:45:31 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *pstr = &str;
    std::string &rstr = str;

    std::cout << &str << std::endl;
    std::cout << pstr << std::endl;
    std::cout << &rstr << std::endl;

    std::cout << str << std::endl;
    std::cout << *pstr << std::endl;
    std::cout << rstr << std::endl;

    return (0);
}