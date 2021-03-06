/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:22:51 by prranges          #+#    #+#             */
/*   Updated: 2022/03/15 13:10:53 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat " << _name << " with grade " << _grade << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
    
    std::cout << "Bureaucrat " << _name << " with grade " << _grade << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << _name << " destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
    {
        _grade = bureaucrat.getGrade();
        _name = bureaucrat.getName();
    }
    std::cout << "Bureaucrat " << _name << " operator= called" << std::endl;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high exception");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low exception");
}

void Bureaucrat::upGrade()
{
    if (this->getGrade() - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
    {
        this->_grade--;
        std::cout << "Bureaucrat " << _name << " was upgraded to " << _grade << " grade" << std::endl;
    }
}

void Bureaucrat::downGrade()
{
    if (this->getGrade() + 1 > 150)
        throw Bureaucrat::GradeTooLowException(); 
    else
    {
        this->_grade++;
        std::cout << "Bureaucrat " << _name << " was downgraded to " << _grade << " grade" << std::endl;
    }
}

std::ostream &operator<< (std::ostream &out, Bureaucrat const &bureaucrat)
{
    out << "*" << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << "*" << std::endl;
    return (out);
}