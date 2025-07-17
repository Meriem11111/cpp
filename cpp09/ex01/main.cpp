#include "RPN.hpp"


int main(int ac, char **av)
{
    if(ac != 2 )
    {
        std::cerr << "ERROR : Arguments" << std::endl;
        return 1;
    }

    RPN rpn;

    rpn.processRPN(av[1]);
}
