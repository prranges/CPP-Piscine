/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:07:23 by prranges          #+#    #+#             */
/*   Updated: 2022/03/16 13:12:15 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &intern)
{
    *this = intern;
}

Intern::~Intern() {}

Intern &Intern::operator= (const Intern &intern)
{
    (void)intern;
    return (*this);
}

Form *Intern::makeForm(std::string formName, const std::string &target)
{
    std::string forms[3] = {"rrf", "ppf", "scf"};
    
    std::cout << "Intern creates " << target << std::endl;
    
    int i;
    for (i = 0; i < 3 && formName != forms[i]; i++);

	switch (i)
	{
		case 0: 
            return (new RobotomyRequestForm(target));
		case 1: 
            return (new PresidentialPardonForm(target));
		case 2: 
            return (new ShrubberyCreationForm(target));
	}
	throw Intern::InternExeption();
	return (NULL);
}

const char *Intern::InternExeption::what() const throw()
{
    return ("Unknown form");
}
