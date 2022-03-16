/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:57:36 by prranges          #+#    #+#             */
/*   Updated: 2022/03/16 09:42:37 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf)
{
    *this = ppf;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &ppf)
{
    if (this != &ppf)
    {
        _target = ppf._target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getGradeToExec())
		throw Form::GradeTooLowException();
	else if (!getSignStatus())
		throw Form::notSigned();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}