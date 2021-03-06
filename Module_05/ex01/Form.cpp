/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:11:11 by prranges          #+#    #+#             */
/*   Updated: 2022/03/15 17:33:17 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signStatus(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (gradeToExec > 150 || gradeToSign > 150)
        throw Form::GradeTooHighException();
    else if (gradeToExec < 1 || gradeToSign < 1)
        throw Form::GradeTooHighException();
}   

Form::Form(const Form &form)
{
    *this = form;
}

Form::~Form()
{}

std::string Form::getName() const
{
    return (_name);
}

bool Form::getSignStatus() const
{
    return (_signStatus);
}

int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int Form::getGradeToExec() const
{
    return (_gradeToExec);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (_gradeToSign < bureaucrat.getGrade())
        throw Form::GradeTooLowException();
    else
        _signStatus = true;
}

Form &Form::operator= (const Form &form)
{
    if (this != &form)
    {
        _name = form.getName();
        _signStatus = form.getSignStatus();
        _gradeToSign = form.getGradeToSign();
        _gradeToExec = form.getGradeToExec();
    }
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("grade is too low");
}

std::ostream &operator<< (std::ostream &out, Form const &form)
{
    out << "*" << form.getName() << " form status  - ";
    if (form.getSignStatus())
        out << "signed. ";
    else
        out << "not signed. ";
    out << "Min grade to sign - " << form.getGradeToSign();
    out << ", min grade to execute - " << form.getGradeToExec() << "*" << std::endl;
        
    return (out);
}