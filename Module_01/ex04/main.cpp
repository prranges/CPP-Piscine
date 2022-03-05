/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:06:20 by prranges          #+#    #+#             */
/*   Updated: 2022/03/05 15:14:17 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: Use 3 arguments." << std::endl;
        return (1);
    }
    
	std::ifstream inFile(av[1]);
	std::string fileNameIn = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	input;
	
    if (!inFile)
	{
		std::cerr << "Error: Input file" << std::endl;
		return (1);
	}
	
	std::string	fileNameOut = fileNameIn + ".replace";
	std::ofstream outFile;
	outFile.open(fileNameOut, std::ios::out | std::ios::trunc);
	
	if (!outFile)
	{
		std::cerr << "Error: Output file" << std::endl;
		return (1);
	}
	while (getline(inFile, input))
	{
		size_t pos = 0;
		while ((pos = input.find(s1)) != std::string::npos)
		{
			input.erase(pos, s1.size());
			input.insert(pos, s2);
		}
		outFile << input << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}