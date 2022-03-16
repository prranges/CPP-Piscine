/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:57:33 by prranges          #+#    #+#             */
/*   Updated: 2022/03/15 20:32:01 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFORN_HPP
# define PRESIDENTALPARDONFORN_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(const PresidentialPardonForm &ppf);
        ~PresidentialPardonForm();

        PresidentialPardonForm &operator= (const PresidentialPardonForm &ppf);

        virtual void execute(Bureaucrat const &executor) const;
};

#endif