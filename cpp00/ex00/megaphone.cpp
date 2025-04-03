#include <iostream>


int main(int ac , char **av)
{
    if(ac >= 2)
    {
        int i = 1;
        
        while(av[i])
        {
            int j = 0;;
            while(av[i][j])
            {
               av[i][j] = toupper(av[i][j]);
               j++;
            }
            std::cout << av[i] ;
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
