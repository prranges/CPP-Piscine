/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:50:53 by prranges          #+#    #+#             */
/*   Updated: 2022/03/18 10:31:28 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::Base() {}
Base::~Base() {}

Base *generate(void)
{
    srand((uint)time(0));
    switch (rand() % 3)
    {
        case 0: 
            return (new A());
            break;
        case 1: 
            return (new B());
            break;
        case 2: 
            return (new C());
            break;   
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A num;
        num = dynamic_cast<A&>(p);
        std::cout << "Type A" << std::endl;     
    }
    catch (const std::exception &e) {}
    try
    {
        B num;
        num = dynamic_cast<B&>(p);
        std::cout << "Type B" << std::endl;     
    }
    catch (const std::exception &e) {}
    try
    {
        C num;
        num = dynamic_cast<C&>(p);
        std::cout << "Type C" << std::endl;     
    }
    catch (const std::exception &e) {}
}