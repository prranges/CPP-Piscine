/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:22:57 by prranges          #+#    #+#             */
/*   Updated: 2022/03/15 17:35:05 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
    
    Bureaucrat *v = new Bureaucrat("Vova", 1);
    Form *vf1 = new Form("Doc_01", 150, 150);
    Form *vf2 = new Form("Doc_02", 1, 1);
    try
    {
        std::cout << *v;
        std::cout << *vf1;
        
        v->signForm(*vf1);
        
        std::cout << *vf1;
        
        v->signForm(*vf1);
        v->downGrade();
        std::cout << *vf2;
        v->signForm(*vf2);
        std::cout << *vf2;
        v->upGrade();
        v->upGrade();
        std::cout << "Exeption ToHigh is not work" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exeption: " << e.what() << std::endl;
    }
    delete v;
    
    delete vf1;
    delete vf2;
    
    // std::cout << std::endl;

    // Bureaucrat *d = new Bureaucrat("Dima", 150);
    // try
    // {
    //     std::cout << *d;
    //     d->upGrade();
    //     d->downGrade();
    //     d->downGrade();
    //     std::cout << "Exeption ToLow is not work" << std::endl;
    // }
    // catch(const std::exception &e)
    // {
    //     std::cerr << "Exeption: " << e.what() << std::endl;
    // }
    // delete d;
    
    return (0);
}