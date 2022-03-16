/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:22:57 by prranges          #+#    #+#             */
/*   Updated: 2022/03/15 14:09:22 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat h("Hulio", 0);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exeption: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat p("Pedro", 200);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exeption: " << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    
    Bureaucrat *v = new Bureaucrat("Vova", 1);
    try
    {
        std::cout << *v;
        v->downGrade();
        v->upGrade();
        v->upGrade();
        std::cout << "Exeption ToHigh is not work" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exeption: " << e.what() << std::endl;
    }
    delete v;
    
    std::cout << std::endl;

    Bureaucrat *d = new Bureaucrat("Dima", 150);
    try
    {
        std::cout << *d;
        d->upGrade();
        d->downGrade();
        d->downGrade();
        std::cout << "Exeption ToLow is not work" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exeption: " << e.what() << std::endl;
    }
    delete d;
    
    return (0);
}