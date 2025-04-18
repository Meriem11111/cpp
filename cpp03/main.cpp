/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:36:50 by meriem            #+#    #+#             */
/*   Updated: 2025/04/18 01:33:44 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap player("Player1");
    player.attack("Enemy1");
    player.takeDamage(5);
    player.beRepaired(10);
    player.attack("Enemy2");

    
}
