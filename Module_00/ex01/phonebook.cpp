/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:21:39 by prranges          #+#    #+#             */
/*   Updated: 2022/03/03 15:30:59 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : _pbSize(0){}
PhoneBook::~PhoneBook() {}

void    PhoneBook::addContact()
{
	std::string	input;
    static int  i;
    
    i %= 8;
    std::cout << "First name: ";
	std::getline(std::cin, input);
	this->_pb[i].setFirstName(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	this->_pb[i].setLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	this->_pb[i].setNickName(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	this->_pb[i].setPhoneNum(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	this->_pb[i].setDarkSecret(input);
    i++;
    if (this->_pbSize != 8)
	    this->_pbSize++;
    std::cout << this->_pbSize << std::endl;
}

void    PhoneBook::searchContact() const
{
    if (this->_pbSize == 0)
    {
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}


	for (unsigned int i = 0; i < this->_pbSize; i++)
    {
        if (i == 0)
        {
            std::cout << std::setw(10) << "Index" << "|";
            std::cout << std::setw(10) << "First name" << "|";
            std::cout << std::setw(10) << "Last name" << "|";
            std::cout << std::setw(10) << "Nickname" << std::endl;
        }
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->_formatContact(this->_pb[i].getFirstName()) << "|";
		std::cout << std::setw(10) << this->_formatContact(this->_pb[i].getLastName()) << "|";
		std::cout << std::setw(10) << this->_formatContact(this->_pb[i].getNickName()) << std::endl;
	}

	std::string			input;
	unsigned int		index;

	std::cout << "Choose index to see full info : ";
	std::getline(std::cin, input);
	std::istringstream	iss(input);
	iss >> index;
    if (!index || index > this->_pbSize || index < 1)
        std::cout << "Wrong index!" << std::endl;
    else
        this->_pb[index - 1].displayContact();
}

std::string const	PhoneBook::_formatContact(std::string const contact) const
{
	return (contact.size() > 10 ? contact.substr(0, 9) + '.' : contact);
}