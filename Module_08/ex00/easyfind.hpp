/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:23:31 by prranges          #+#    #+#             */
/*   Updated: 2022/03/23 14:29:11 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

class MyException : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("Exception: Cannot find element.");
        }
};

template <typename T>
typename T::iterator easyfind(T &a, int i)
{
    if ((std::find(a.begin(), a.end(), i)) != a.end())
        return (std::find(a.begin(), a.end(), i));
    else
        throw MyException();
}

#endif