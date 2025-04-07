/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:42:07 by meriem            #+#    #+#             */
/*   Updated: 2025/04/07 02:33:51 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): weapon(weapon)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;    
}
