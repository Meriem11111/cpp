#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
       ~WrongAnimal();
        WrongAnimal(const WrongAnimal& org);
        WrongAnimal& operator=(const WrongAnimal& org);
        void makeSound() const;
        std::string getType() const;

};

#endif