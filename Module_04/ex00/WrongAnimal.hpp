/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:13:24 by prranges          #+#    #+#             */
/*   Updated: 2022/03/12 20:10:02 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
       
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &wronganimal);
        virtual ~WrongAnimal();

        WrongAnimal &operator= (const WrongAnimal &wronganimal);

        void makeSound() const;
	    std::string getType() const;

};

#endif