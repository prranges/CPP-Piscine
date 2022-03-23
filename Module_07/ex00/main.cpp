/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:31:09 by d1ma5             #+#    #+#             */
/*   Updated: 2022/03/23 09:58:26 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main( void )
{ 
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    //////////////////////////
    // Awesome x(2), y(4);
	// std::cout << "\n * Before swap * \nAwesome x = " << x << "\nAwesome y = " << y << std::endl;
	// ::swap(x, y);
	// std::cout << "* After swap * \nAwesome x = " << x << "\nAwesome y = " << y << std::endl;
	// Awesome mi = ::min(x, y);
	// std::cout << "Min value between x & y = " << mi << std::endl;
	// Awesome ma = ::max(x, y);
	// std::cout << "Max value between x & y = " << ma << std::endl;
	/////////////////////////
    
    return (0); 
}