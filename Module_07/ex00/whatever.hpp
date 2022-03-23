/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:58 by d1ma5             #+#    #+#             */
/*   Updated: 2022/03/23 10:15:26 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
const T &min(const T &a, const T &b)
{
    return ((b <= a) ? b : a);
}

template <typename T>
const T &max(const T &a, const T &b)
{
    return ((b >= a) ? b : a);
}

template <typename T>
void swap(T &a, T &b)
{
    T c;
    
    c = a;
    a = b;
    b = c;
}

// class Awesome 
// {
// 	private:
// 		int _n;

// 	public:
// 		Awesome(void): _n(0) {}
// 		Awesome(int n): _n(n) {}
// 		Awesome & operator=(Awesome & a) {_n = a._n; return (*this);}
// 		bool operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
// 		bool operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
// 		bool operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
// 		bool operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
// 		bool operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
// 		bool operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}
// 		int get_n() const {return (_n);}
// };
// std::ostream &operator<<(std::ostream &out, Awesome &a) 
// {
//     out << a.get_n(); return (out);
// }

#endif