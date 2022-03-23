/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:05:23 by prranges          #+#    #+#             */
/*   Updated: 2022/03/17 17:26:47 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));   
}

int main()
{
    Data student1 = {"Bob", 25, 'M'};
    
    std::cout << std::endl;
    std::cout<< "Addr:\t" << &student1 << std::endl;
    std::cout << "Name:\t" << student1.name << std::endl;
    std::cout << "Age:\t" << student1.age << std::endl;
    std::cout << "Sex:\t" << student1.sex << std::endl;
    std::cout << std::endl;

    uintptr_t ptr1 = serialize(&student1);

    std::cout << "*** Serialized ***" << std::endl << std::endl;
    std::cout << ptr1 << std::endl;
    std::cout << std::endl;
    
    // std::cout << "Name:\t" << deserialize(ptr1)->name << std::endl;
    // std::cout << "Age:\t" << deserialize(ptr1)->age << std::endl;
    // std::cout << "Sex:\t" << deserialize(ptr1)->sex << std::endl;
    // std::cout << std::endl;

    Data *stAfter = deserialize(ptr1);

    std::cout << "*** Deserialized ***" << std::endl << std::endl;
    std::cout << "Addr:\t" << &student1 << std::endl;
    std::cout << "Name:\t" << stAfter->name << std::endl;
    std::cout << "Age:\t" << stAfter->age << std::endl;
    std::cout << "Sex:\t" << stAfter->sex << std::endl;

    return (0);
}