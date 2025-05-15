#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(const Animal& org);
        Animal& operator=(const Animal& org);
        virtual void makeSound() const;
        std::string getType() const;

};

#endif