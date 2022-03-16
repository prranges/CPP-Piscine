/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:10:59 by prranges          #+#    #+#             */
/*   Updated: 2022/03/16 11:14:16 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool _signStatus;
        int _gradeToSign;
        int _gradeToExec;
        
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(const Form &form);
        virtual ~Form();

        std::string getName() const;
        bool getSignStatus() const;
        int getGradeToSign() const;
	    int getGradeToExec() const;

        void beSigned(const Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;
	    
        Form &operator= (const Form &form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class notSigned : public std::exception
		{
            public:
	            virtual const char* what() const throw();
		};
};

std::ostream &operator<< (std::ostream &out, Form const &form);

#endif
