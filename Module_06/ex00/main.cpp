/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:30:28 by prranges          #+#    #+#             */
/*   Updated: 2022/03/17 11:35:03 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{

	if (ac == 2)
	{
		Conversion num(av[1]);
		std::cout << num << std::endl;
	}
	else
		std::cout << "Error arguments" << std::endl;
	return 0;
}
