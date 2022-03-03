/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:45:48 by prranges          #+#    #+#             */
/*   Updated: 2022/03/02 13:46:02 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_toupper_str(char *str)
{
	int	i;
	
	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}

int main(int ac, char **av)
{
	int i;
	
    if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
			std::cout << ft_toupper_str(av[i++]) << " ";
		std::cout << std::endl;
	}
	return (0);
}
