/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:42:10 by meriem            #+#    #+#             */
/*   Updated: 2025/04/07 02:33:41 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapoon)
{
    weapon = &weapoon;
}

void HumanB::attack()
{
    if(weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;    
}