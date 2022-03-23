/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d1ma5 <d1ma5@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:26:29 by d1ma5             #+#    #+#             */
/*   Updated: 2022/03/21 20:13:41 by d1ma5            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<float> num(10);

    for (int i = 0; i < 10; i++)
	{
        num[i] = i;
	}
    
    num[6] = 42.21;

    Array<float> num2(0);
    num2 = num;

    num[6] = 21.42;

    Array<float> num3(num);

    Array<int> num4;
    
    try
    {
        std::cout << "Num 1 (original):\t" << num[6] << std::endl;
        std::cout << "Num 2 (operator=):\t" << num2[6] << std::endl;
        std::cout << "Num 3 (num 1copy):\t" << num3[6] << std::endl;
        std::cout << "Num 4 (default ctor):\t" << num4[0] << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}