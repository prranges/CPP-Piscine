/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:28:47 by d1ma5             #+#    #+#             */
/*   Updated: 2022/03/23 10:20:01 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *array, int len, void(*f)(T const &t))
{
    for (int i = 0; i < len; ++i)
        f(array[i]);
}

template <typename T>
void print(T const &t)
{
    std::cout << t << " ";
}

//////////////////////
// class Awesome
// {
//     private:
//         int _n;
    
//     public:
//         Awesome(void) : _n(42) {return;}
//         int get(void) const {return this->_n;}    
// };
// std::ostream &operator<<(std::ostream &out, Awesome const &rhs) {out << rhs.get(); return out;}
//////////////////////

#endif