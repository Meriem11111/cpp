#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    if(ac < 2)
    {
        std::cerr<< "Error args" << std::endl;
        return 1;
    }
 
    PmergeMe sort;
    int i = 1;
    while(i < ac)
    {
        if(!sort.Check(av[i]))
        {
            std::cerr << "Error : Invalid Argument " << std::endl;
            return 1;
        }
        i++;
    }
    sort.start();
    return 0;
}
// 5 8 3 1 22 9 6 33 4 7 
