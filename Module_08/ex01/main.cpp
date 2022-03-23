/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:23:38 by prranges          #+#    #+#             */
/*   Updated: 2022/03/23 18:27:34 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{

    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // Span a(5);
    
    
    // try
    // {
    //     a.addNumber(1);
    //     a.addNumber(45);
    //     a.addNumber(-54);
    //     a.addNumber(31);
    //     a.addNumber(16);
    //     // a.addNumber(42);
    // }
    // catch(const std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // std::cout << 

    

    return (0);
}