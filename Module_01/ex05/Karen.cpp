/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:16:41 by prranges          #+#    #+#             */
/*   Updated: 2022/03/05 13:50:26 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    _msg[0] = "DEBUG";
    _msg[1] = "INFO";
    _msg[2] = "WARNING";
    _msg[3] = "ERROR";

    _funcPrt[0] = &Karen::debug;
    _funcPrt[1] = &Karen::info;
    _funcPrt[2] = &Karen::warning;
    _funcPrt[3] = &Karen::error;
}

Karen::~Karen()
{}

void Karen::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (level == _msg[i])
        {
            (this->*_funcPrt[i])();
            break;
        }
    }
}

void Karen::debug(void)
{
    std::cout << "[DEBUG]: ";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[INFO]: ";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[WARNING]: ";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ERROR]: ";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}