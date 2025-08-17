#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    if(ac <= 2)
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
    sort.fill();
    return 0;
}

