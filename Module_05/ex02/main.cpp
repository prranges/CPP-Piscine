/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:22:57 by prranges          #+#    #+#             */
/*   Updated: 2022/03/16 10:05:12 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    // try
    // {
    //     Bureaucrat h("Hulio", 0);
    // }
    // catch(const std::exception &e)
    // {
    //     std::cerr << "Exeption: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat p("Pedro", 200);
    // }
    // catch(const std::exception &e)
    // {
    //     std::cerr << "Exeption: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Form f1("Doc_00", 0, 10);
    //     std::cout << "Exeption is not work" << std::endl;
    // }
    // catch(const std::exception &e)
    // {
    //     std::cerr << "Exeption: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Form f3("Doc_00", 10, 0);
    //     std::cout << "Exeption is not work" << std::endl;
    // }
    // catch(const std::exception &e)
    // {
    //     std::cerr << "Exeption: " << e.what() << std::endl;
    // }
    
    std::cout << std::endl;
    
    Bureaucrat *vova = new Bureaucrat("Vova", 1);
    PresidentialPardonForm *vf1 = new PresidentialPardonForm("Doc_01");
    RobotomyRequestForm *vf2 = new RobotomyRequestForm("Doc_02");
    ShrubberyCreationForm *vf3 = new ShrubberyCreationForm("Doc_03");
    try
    {
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
        std::cout << "Exeption ToHigh is not work" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exeption: " << e.what() << std::endl;
    }
    delete vova;
    delete vf1;
    delete vf2;
    delete vf3;
    
    return (0);
}