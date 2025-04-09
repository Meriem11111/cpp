/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:57:02 by meriem            #+#    #+#             */
/*   Updated: 2025/04/09 22:56:34 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        Harl harl;
        std::string level = av[1];
        harl.complain(level);
    }
    else
    {
        std::cerr << "Error !" << std::endl;
        return(1);
    }
    return (0);
}
