#include "Base.hpp"

Base::Base() {}
Base::~Base() {}

A::A(){}
A::~A(){}

B::B(){}
B::~B(){}

C::C(){}
C::~C(){}

Base* generate(void)
{
    
    int random = rand() % 3;

    switch (random)
    {
        case 0:
        {
            std::cout << "-- A -- IS CREATED !!" << std::endl;
            return new A();;
        }
        case 1:
        {
            std::cout << "-- B -- IS CREATED !!" << std::endl;
            return new B();
        }
        case 2:
        {
            std::cout << "-- C -- IS CREATED !!" << std::endl;
            return new C();;
        }
        default :
            return nullptr;
    };
}

void identify(Base* p)
{
    if(dynamic_cast<A*> (p))
    {
        std::cout << "The type is A !!" << std::endl;

    }
    else if(dynamic_cast<B*> (p))
    {
         std::cout << "The type is B !!" << std::endl;
    }
    else if(dynamic_cast<C*> (p))
    {
         std::cout << "The type is C !!" << std::endl;
    }
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&> (p); // here it returns a reference of the object in suceess , we don t need it so that why we use void
        std::cout << "ref The type is A !!" << std::endl;
        return;

    }
    catch(const std::exception& e){}

    try
    {
        (void)dynamic_cast<B&> (p);
        std::cout << "ref The type is B !!" << std::endl;
        return;

    }
    catch(const std::exception& e){}

    try{
        (void)dynamic_cast<C&> (p);
        std::cout << "ref The type is C !!" << std::endl;
        return;

    }
    catch(const std::exception& e) {}
}
