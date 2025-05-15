#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap fragtrap("plyr ");

    fragtrap.attack ("plyr2 ");
    fragtrap.takeDamage (8);
    fragtrap.beRepaired (3);
    fragtrap.highFivesGuys();
}