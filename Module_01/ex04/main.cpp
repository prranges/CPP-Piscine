/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:06:20 by prranges          #+#    #+#             */
/*   Updated: 2022/03/04 20:16:38 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: Use 4 arguments." << std::endl;
        return (1);
    }
    
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string filename = av[1];
	std::string	line;
	std::ifstream inf(av[1]);
	
    if (!inf)
	{
		std::cout << "Error: Input file" << std::endl;
		return (1);
	}
	std::ofstream outf(filename.append(".replace").c_str(), std::ofstream::trunc);
	if (!outf)
	{
		std::cout << "Error: Output file" << std::endl;
		return (1);
	}
	while (getline(inf, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
		}
		outf << line << std::endl;
	}
	inf.close();
	outf.close();
	return (0);
}