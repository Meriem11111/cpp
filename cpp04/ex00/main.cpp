#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j =  new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    
    //----------------------------------------------------------//
    // std::cout << std::endl;

    // const WrongAnimal* wronganimal = new WrongAnimal();
    // const WrongAnimal* wrongcat = new WrongCat();

    // std::cout << wronganimal->getType() << "  wanimal " << std::endl;
    // std::cout << wrongcat->getType() << " wcat " << std::endl;
    // wronganimal->makeSound(); //will output the cat sound!
    // wrongcat->makeSound();
    // meta->makeSound();


    // delete wronganimal;
    // delete wrongcat;;
    return 0;
}