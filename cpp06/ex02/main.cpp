#include "Base.hpp"

int main()
{
    srand(time(0)); 

    Base* test = generate();

    identify(test);
    identify(*test); //ref

    delete test;
}