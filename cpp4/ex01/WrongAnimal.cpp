#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called " << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal constructor called " << std::endl;
    this->type = type;
}

WrongAnimal::~WrongAnimal()
{}

WrongAnimal::WrongAnimal(const WrongAnimal& org)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = org;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& org)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if(this != &org)
    {
        this->type = org.type;
    }
    return(*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make sound called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}

