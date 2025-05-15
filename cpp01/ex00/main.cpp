/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:36:22 by meriem            #+#    #+#             */
/*   Updated: 2025/04/24 16:35:03 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("zombie1");
    zombie.announce();
    
    Zombie* zombie2 = newZombie("zombie2");
    zombie2->announce(); 
    delete zombie2;

    randomChump( "zombie3 ");
    
}

