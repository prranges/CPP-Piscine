/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:22:57 by prranges          #+#    #+#             */
/*   Updated: 2022/03/16 11:31:21 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main()
{
    
    std::cout << std::endl;
    Bureaucrat *vova = new Bureaucrat("Vova", 1);
    Intern someRandomIntern;
    Form *vf1;
    Form *vf2;
    Form *vf3;
    // Form *vf4;

    try
    {
        vf1 = someRandomIntern.makeForm("scf", "Doc_00");
        vf2 = someRandomIntern.makeForm("rrf", "Doc_01");
        vf3 = someRandomIntern.makeForm("ppf", "Doc_02");
        // vf4 = someRandomIntern.makeForm("ddf", "Error_doc"); 
        
        std::cout << *vova;
        
        std::cout << std::endl << *vf1 << std::endl;
        
        // vova->upGrade();
        // vova->executeForm(*vf1);
        vova->signForm(*vf1);
        vova->executeForm(*vf1);
        
        std::cout << std::endl << *vf2 << std::endl;
        
        vova->signForm(*vf2);
        vova->executeForm(*vf2);

        std::cout << std::endl << *vf3 << std::endl;
        
        vova->signForm(*vf3);
        vova->executeForm(*vf3);

        
        // vova->signForm(*vf1);
        // vova->downGrade();
        // std::cout << *vf2;
        // vova->signForm(*vf2);
        // std::cout << *vf2;
        // vova->upGrade();
        // vova->upGrade();
        // std::cout << *vf3;
        // std::cout << "Exeption ToHigh is not work" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exeption: " << e.what() << std::endl;
    }
    delete vova;
    delete vf1;
    delete vf2;
    delete vf3;
    // delete vf4;
    
    return (0);
}