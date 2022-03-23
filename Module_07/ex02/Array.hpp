/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d1ma5 <d1ma5@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:26:24 by d1ma5             #+#    #+#             */
/*   Updated: 2022/03/21 19:15:50 by d1ma5            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        unsigned int _n;
        T *_array;
    public:
        Array() : _n(0), _array(NULL)
        {}
        
        Array(unsigned int n) : _n(n) 
        {
            if (size() > 0)
                _array = new T[size()];
            else
                _array = NULL;
        }

        Array(Array<T> const &array) : _n(0), _array(NULL)
        {
             *this = array;
        }
        
        ~Array() 
        {
            if (size() > 0)
                delete[] _array;
        }

        Array<T> &operator= (Array<T> const &array)
        {
            if (size() > 0)
                delete[] _array;
            if (array.size())
            {
                _array = new T[array.size()];
                for (unsigned int i = 0; i < array.size(); i++)
                    _array[i] = array._array[i];
                _n = array.size();
            }
            return (*this);
        }

        class outOfRange : public std::exception
        {
            public:
                const char *what() const throw() 
                { 
                    return ("Exception: Index is out of range.");
                }
        };

        T &operator[](unsigned int index)
		{
			if (index >= size())
				throw Array<T>::outOfRange();
			return (_array[index]);
		};
        
        unsigned int size() const 
        {
            return (this->_n);
        }
};

#endif