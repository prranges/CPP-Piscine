/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:30 by prranges          #+#    #+#             */
/*   Updated: 2022/03/13 18:14:19 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
        
    public:
        Cat();
        Cat(const Cat &cat);
        virtual ~Cat();

        Cat &operator= (const Cat &cat);

        virtual void makeSound() const;
        virtual std::string getType() const;
        Brain *getBrain() const;
};

#endif