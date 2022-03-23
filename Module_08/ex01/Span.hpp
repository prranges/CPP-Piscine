/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:23:51 by prranges          #+#    #+#             */
/*   Updated: 2022/03/23 18:31:00 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
    private:
        unsigned _N;
        std::vector<int> _array;
        
    public:
        Span(unsigned int N);
        Span(Span const &span);
        ~Span();

        Span &operator= (const Span &span);

        class MyException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Exception: Array is full");
                }
        };
        
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
};

#endif