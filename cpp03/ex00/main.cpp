/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:36:50 by meriem            #+#    #+#             */
/*   Updated: 2025/05/04 08:37:00 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() 
{
    ClapTrap player("Player1");
    
    player.attack("enemy");
    
    player.takeDamage(10); 
    player.beRepaired(5);  
    player.attack("plyr2"); 
}
