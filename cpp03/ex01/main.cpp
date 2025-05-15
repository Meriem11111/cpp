/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 23:26:04 by meriem            #+#    #+#             */
/*   Updated: 2025/05/04 08:35:32 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main( void )
{
    ScavTrap robot( "Player" );

    robot.attack( "Player2" );
    robot.takeDamage( 2 );
    robot.beRepaired( 5 );
    robot.guardGate();

    return 0;
}
