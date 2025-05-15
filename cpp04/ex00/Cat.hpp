#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& org);
        Cat& operator=(const Cat& org);
        void makeSound() const;
};

#endif