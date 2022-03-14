/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:24 by prranges          #+#    #+#             */
/*   Updated: 2022/03/12 19:33:13 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
       
    public:
        Animal();
        Animal(const Animal &animal);
        virtual ~Animal();

        Animal &operator= (const Animal &animal);

        virtual void makeSound() const;
	    virtual std::string getType() const;

};

#endif