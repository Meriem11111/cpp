/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:42:21 by meriem            #+#    #+#             */
/*   Updated: 2025/04/07 02:26:08 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
    return(type);
}

void Weapon::setType(const std::string& newtype)
{
    this->type = newtype;
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{
    type = "unknown";
}

Weapon::~Weapon(){};