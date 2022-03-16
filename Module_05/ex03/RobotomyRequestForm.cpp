/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:57:39 by prranges          #+#    #+#             */
/*   Updated: 2022/03/16 09:48:45 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf)
{
    *this = rrf;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &rrf)
{
    if (this != &rrf)
    {
        _target = rrf._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (getGradeToExec() < executor.getGrade())
        throw Bureaucrat::GradeTooLowException();
    else if (!getSignStatus())
        throw Form::notSigned();
    else
    {
        std::cout << "Brrrrr... brrrrr... brrrr.. " << std::endl;
        if (rand() % 2)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "The robotomy of " << _target << " failed" << std::endl;
    }
}