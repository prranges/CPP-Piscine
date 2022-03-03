/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:21:55 by prranges          #+#    #+#             */
/*   Updated: 2022/03/03 12:19:06 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string> // duh..
#include <sstream> // istringstream
#include <iostream> // cout
#include <iomanip> // setw

class Contact
{
    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNum;
    std::string _darkSecret;

    public:
    Contact();
    ~Contact();

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNum() const;
    std::string getDarkSecret() const;

    void        setFirstName(std::string firstName);
    void        setLastName(std::string lastName);
    void        setNickName(std::string nickName);
    void        setPhoneNum(std::string phoneNum);
    void        setDarkSecret(std::string darkSecret);

    void		displayContact() const;
};

class PhoneBook
{
    public:
    PhoneBook();
    ~PhoneBook();
    
    void    addContact();
    void    searchContact() const;

    private:
    std::string const	_formatContact(std::string const row) const;

	Contact				_pb[8];
	unsigned int		_pbSize;
};

#endif