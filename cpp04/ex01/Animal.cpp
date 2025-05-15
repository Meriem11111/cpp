#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called " << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal constructor called " << std::endl;
    this->type = type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called " << std::endl;
}

Animal::Animal(const Animal& org)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = org;
}

Animal& Animal::operator=(const Animal& org)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if(this != &org)
    {
        this->type = org.type;
    }
    return(*this);
}

void Animal::makeSound() const
{
    std::cout << "Animal make sound called" << std::endl;
}


std::string Animal::getType() const
{
    return(this->type);
}