/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 23:26:08 by meriem            #+#    #+#             */
/*   Updated: 2025/05/02 00:02:51 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
  public:
    ScavTrap();  
    ScavTrap(std::string name);  
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap& org);
    ScavTrap(const ScavTrap &original);
    void guardGate();
    void attack(const std::string& target);
    
};

#endif