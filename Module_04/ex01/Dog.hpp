/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:36 by prranges          #+#    #+#             */
/*   Updated: 2022/03/13 18:47:47 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
        
    public:
        Dog();
        Dog(const Dog &dog);
        virtual ~Dog();

        Dog &operator= (const Dog &dog);

        virtual void makeSound() const;
	    virtual std::string getType() const;
        Brain *getBrain() const;
};

#endif