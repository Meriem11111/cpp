
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed " << std::endl;
}


Brain::~Brain()
{
    std::cout << "Brain destructed " << std::endl;

}

Brain::Brain(const Brain& org)
{
    std::cout << "Brain copy constructed called " << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = org.ideas[i];
    }
}
Brain& Brain::operator=(const Brain& org)
{
    std::cout << "Brain copy assignment called " << std::endl;
    if(this != &org)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = org.ideas[i];
        }
    }
    return(*this);
}

