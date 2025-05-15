#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called " << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called " << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

Dog::Dog(const Dog& org) : Animal(org)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*org.brain);
}

Dog& Dog::operator=(const Dog& org)
{
    std::cout << "Dog assignment operator called" << std::endl;

    if(this != &org)
    {
        delete brain;
        Animal::operator=(org);
        this->brain = new Brain(*org.brain);
    }
    return(*this);
}
