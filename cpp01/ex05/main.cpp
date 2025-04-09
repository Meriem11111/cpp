/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:04:16 by meriem            #+#    #+#             */
/*   Updated: 2025/04/09 21:35:37 by meriem           ###   ########.fr       */
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
        std::cerr << "Error " << std::endl;
    
    return 0;
}
