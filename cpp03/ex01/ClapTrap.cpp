/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:13:58 by meriem            #+#    #+#             */
/*   Updated: 2025/04/18 23:26:00 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor is called !" << std::endl;
    this->Name = "";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout << "Copy Constructor is called !" << std::endl;
    this->Name = original.Name;
    this->hit_points = original.hit_points;
    this->energy_points = original.energy_points;
    this->attack_damage = original.attack_damage;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor is called !" << std::endl;
    this->Name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor is called !" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap &original)
{
    if(this != &original)
    {
        std::cout << "Copy assignment operator called!" << std::endl;
        this->Name = original.Name;
        this->hit_points = original.hit_points;
        this->energy_points = original.energy_points;
        this->attack_damage = original.attack_damage;
    }
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target <<  ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is unable to act (no energy or dead)" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points > 0 && this->energy_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << " take " << amount <<  " damage" << std::endl;
        if(amount >= this->hit_points)
            this->hit_points = 0;
        else
            this->hit_points -= amount;
        std::cout << "ClapTrap " << this->Name << " now has " << this->hit_points << " hit points "<< std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is unable to act (no energy or dead)" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0 && this->hit_points > 0 )
    {
        this->hit_points += amount;
        this->energy_points--;
        std::cout << "ClapTrap " << this->Name << " repairs itself for " << amount << " hit points!" << std::endl;
        std::cout << ", so ClapTrap "<< this->Name << " has " << this->hit_points <<  " hit points" << std::endl;   
    }
    else
        std::cout << "ClapTrap " << this->Name << " is unable to act (no energy or dead)" << std::endl;
    
}
