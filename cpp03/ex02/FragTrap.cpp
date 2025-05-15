
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap parameterized Constructor called !" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructed!" << std::endl;
    this->Name = "unamed";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap  destructed !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& othr) : ClapTrap(othr)
{
    std::cout << "FragTrap  copy constructor called !" << std::endl;
        this->Name = othr.Name;
        this->attack_damage = othr.attack_damage;
        this->hit_points = othr.hit_points ;
        this->energy_points = othr.energy_points ;
}

FragTrap& FragTrap::operator=(const FragTrap& org)
{
    std::cout << "FragTrap copy assignement operator called !" << std::endl;
    if(this != &org)
    {
        this->Name = org.Name;
        this->attack_damage = org.attack_damage;
        this->hit_points = org.hit_points ;
        this->energy_points = org.energy_points ;
    }
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " requests a high five! ✋" << std::endl;
}
