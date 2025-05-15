#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal* ptrs[10];
    
    for(int i= 0; i < 5; i++)
    {
        ptrs[i] = new Cat();
        ptrs[i]->makeSound();
    }
    
    for(int i= 5; i < 10; i++)
    {
        ptrs[i] = new Dog();
        ptrs[i]->makeSound();
    }


    for (int j = 0; j < 10; j++)
    {
        delete ptrs[j];
    }
    return (0);
}
