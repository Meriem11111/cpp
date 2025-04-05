/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 22:30:17 by meriem            #+#    #+#             */
/*   Updated: 2025/04/05 22:36:13 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " : is destroyed !" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
