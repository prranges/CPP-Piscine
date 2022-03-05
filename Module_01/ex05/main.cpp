/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <prranges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:16:47 by prranges          #+#    #+#             */
/*   Updated: 2022/03/05 14:03:40 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen karen;

    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    
    return (0);
}