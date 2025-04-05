/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:36:22 by meriem            #+#    #+#             */
/*   Updated: 2025/04/05 23:42:09 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie me("ME");
    me.announce();
    
    Zombie* mer = newZombie("MIMI");
    mer->announce();
     delete mer;

    randomChump( "TESTT ");
    
}
