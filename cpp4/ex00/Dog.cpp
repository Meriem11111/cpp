#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called " << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called " << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

Dog::Dog(const Dog& org) : Animal(org)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = org.getType ();
    
}

Dog& Dog::operator=(const Dog& org)
{
    std::cout << "Dog assignment operator called" << std::endl;

    if(this != &org)
    {
        this->type = org.getType ();
    }
    return(*this);
}
