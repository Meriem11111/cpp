#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ 
    std::cout << "Cat constructor called " << std::endl;
    brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called " << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat::Cat(const Cat& org) : Animal(org)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*org.brain);
}

Cat& Cat::operator=(const Cat& org)
{
    std::cout << "Cat assignment operator called" << std::endl;

    if(this != &org)
    {
        delete brain;
        Animal::operator=(org);
        this->brain = new Brain(*org.brain);
    }
    return(*this);
}
