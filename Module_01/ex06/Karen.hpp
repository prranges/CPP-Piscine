/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:16:44 by prranges          #+#    #+#             */
/*   Updated: 2022/03/05 13:48:42 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        
        std::string _msg[4];
        void (Karen::*_funcPrt[4])(void);
        
    public:
        Karen();
        ~Karen();

        void complain(std::string level);
};

#endif