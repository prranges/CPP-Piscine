/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:22:54 by prranges          #+#    #+#             */
/*   Updated: 2022/03/14 18:46:41 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
        
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &bureaucrat);
        ~Bureaucrat();

        // exeption GradeTooHighException();
        // exeption GradeTooLowException();
};

#endif