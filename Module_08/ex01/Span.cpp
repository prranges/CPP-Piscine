/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:23:49 by prranges          #+#    #+#             */
/*   Updated: 2022/03/23 18:37:37 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{}

Span::Span(Span const &span)
{
    *this = span;
}

Span::~Span()
{}

Span &Span::operator= (const Span &span)
{
    if (span._N)
    {
        for (unsigned int i = 0; i < span._N; i++)
            _array[i] = span._array[i];
        _N = span._N;
    }
    return (*this);
}

void Span::addNumber(int num)
{
    if (_array.size() < _N)
        _array.push_back(num);
    else
        throw MyException();
}

int Span::shortestSpan()
{
    std::sort(_array.begin(), _array.end());
    
    return (*_array.begin());
}

int Span::longestSpan()
{
    std::sort(_array.begin(), _array.end());
    
    return (*_array.end());
}