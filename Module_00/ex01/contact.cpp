/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:12:35 by prranges          #+#    #+#             */
/*   Updated: 2022/03/03 09:48:20 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string	Contact::getFirstName() const 
{
	return this->_firstName;
}

std::string	Contact::getLastName() const 
{
	return this->_lastName;
}

std::string	Contact::getNickName() const
{
	return this->_nickName;
}

std::string	Contact::getPhoneNum() const
{
	return this->_phoneNum;
}

std::string	Contact::getDarkSecret() const
{
	return this->_darkSecret;
}

void    Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName) 
{
	this->_lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setPhoneNum(std::string phoneNum)
{
	this->_phoneNum = phoneNum;
}

void	Contact::setDarkSecret(std::string darkSecret)
{
	this->_darkSecret = darkSecret;
}

void	Contact::displayContact() const
{
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name : " <<  this->_lastName << std::endl;
	std::cout << "Nickname : " << this->_nickName << std::endl;
	std::cout << "Phone number : " << this->_phoneNum << std::endl;
	std::cout << "Darkest secret : " << this->_darkSecret << std::endl;
}