/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:13:58 by meriem            #+#    #+#             */
/*   Updated: 2025/05/04 08:37:12 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor is called !" << std::endl;
    this->Name = "Unnamed";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout << "ClapTrap Copy Constructor is called !" << std::endl;
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
        std::cout << "ClapTrap Copy assignment operator called!" << std::endl;
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
        std::cout << "ClapTrap " << this->Name << " attacks " << target 
        <<  ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is unable to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points > 0 && this->energy_points > 0)
    {
        if(amount >= this->hit_points)
        {
            std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
            this->hit_points = 0;
            return;
        }
        else
            this->hit_points -= amount;
        std::cout << "ClapTrap " << this->Name << " take " << amount <<  " damage" << std::endl;
        std::cout << "ClapTrap " << this->Name << " now has " << this->hit_points << " hit points "<< std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is unable to take damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0 && this->hit_points > 0 )
    {
        if(this->hit_points + amount > 10)
        {
            amount = 10 - this->hit_points;
            this->hit_points = 10;
            this->energy_points--;
            std::cout << "ClapTrap " << this->Name << " repairs itself for " << amount 
            << " hit points! Now it has " << hit_points << " HP." << std::endl; 
        }
        else
        {
            this->hit_points += amount;
            this->energy_points--;
            std::cout << "ClapTrap " << this->Name << " repairs itself for " << amount 
                      << " hit points! Now it has " << hit_points << " HP." << std::endl; 
        }
    }
    else
        std::cout << "ClapTrap " << this->Name << " is unable to be repaired" << std::endl;
    
}
