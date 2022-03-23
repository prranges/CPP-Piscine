/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:23:33 by prranges          #+#    #+#             */
/*   Updated: 2022/03/23 14:49:59 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
    std::cout << std::endl << "* vector *" << std::endl;
    
    std::vector<int> arrayInt;
    std::vector<int>::iterator it;

    arrayInt.push_back(1);
    arrayInt.push_back(10);
    arrayInt.push_back(-5);
    arrayInt.push_back(90);
    arrayInt.push_back(-200);

    it = arrayInt.begin(); 

    for (; it != arrayInt.end(); it++)
        std::cout << *it << " ";

    std::cout << std::endl;

    try
    {
        std::cout << "We are searching 90, -5 and 100" << std::endl;
        int a;
        a = *(easyfind(arrayInt, 90));
        std::cout << "I found " << a << std::endl;
        a = *(easyfind(arrayInt, -5));
        std::cout << "I found " << a << std::endl;
        a = *(easyfind(arrayInt, 100));
        std::cout << "I found " << a << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << std::endl << "* list *" << std::endl; 

    std::list<int> arrayInt2;
    std::list<int>::iterator it2;

    arrayInt2.push_back(100);
    arrayInt2.push_back(-10);
    arrayInt2.push_back(-15);
    arrayInt2.push_back(77);
    arrayInt2.push_back(-500);

    it2 = arrayInt2.begin();

    for (; it2 != arrayInt2.end(); it2++)
        std::cout << *it2 << " ";

    std::cout << std::endl;

    try
    {
        std::cout << "We are searching 77, 10 and 170" << std::endl;
        int b;
        b = *(easyfind(arrayInt2, 77));
        std::cout << "I found " << b << std::endl;
        b = *(easyfind(arrayInt2, 10));
        std::cout << "I found " << b << std::endl;
        b = *(easyfind(arrayInt2, 170));
        std::cout << "I found " << b << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
        
    return (0);
}