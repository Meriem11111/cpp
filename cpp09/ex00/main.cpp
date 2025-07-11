#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "Error number of arguments" <<std::endl;
        return -1;
    }
    BitcoinExchange B;
    B.ParseFile(av[1]);

}