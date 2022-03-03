/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:12:35 by prranges          #+#    #+#             */
/*   Updated: 2022/03/03 09:48:18 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PhoneBook   pBook;
    std::string command;

    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
        std::getline(std::cin, command);
        if (command == "EXIT")
            return (0);
        else if (command == "ADD")
            pBook.addContact();
        else if (command == "SEARCH")
            pBook.searchContact();
        else
        {
            std::cerr << "Command '" << command << "' not found!" << std::endl;
            continue ;
        }
    }
    return (0);
}