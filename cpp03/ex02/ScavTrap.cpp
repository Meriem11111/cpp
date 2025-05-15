/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 23:42:58 by meriem            #+#    #+#             */
/*   Updated: 2025/05/04 08:38:41 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default Constructor is called !" << std::endl;
    this->Name = "unamed";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor is called !" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor is called !" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& org)
{
    if(this != &org)
    {
        std::cout << "ScavTrap copy assignment operator called!" << std::endl;
        this->Name = org.Name;
        this->hit_points = org.hit_points;
        this->energy_points = org.energy_points;
        this->attack_damage = org.attack_damage;
    }
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap(original)
{
    std::cout << "ScavTrap Copy Constructor is called !" << std::endl;
    this->Name = original.Name;
    this->hit_points = original.hit_points;
    this->energy_points = original.energy_points;
    this->attack_damage = original.attack_damage;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target <<  ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ScavTrap " << this->Name << " is unable to act (no energy or dead)" << std::endl;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << Name << " has entered Gate Keeper mode!" << std::endl;
}
