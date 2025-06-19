#include "whatever.hpp"

int main()
{
    char a = 'a';
    char b = 'x';

    std::cout << a << "-" << b <<std::endl;
    swap(a, b);
    std::cout << a << "-" << b <<std::endl;


     
     std::cout << "min = " << min(a, b) <<std::endl;
     std::cout << "max = " << max(a, b) <<std::endl;

    return 0;
}