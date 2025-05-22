#include "Intern.hpp"

Intern::Intern()
{}

Intern:: Intern(const Intern& other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern& other) 
{
    (void)other;
    return(*this);
}

Form* Intern::makeForm(std::string FormName, std::string FormTarget)
{
    std::string forms[3] = {"Shrubbery creation", "robotomy request", "presidential pardon"};
    int index = -1;

    for(int i = 0; i < 3; i++)
    {
        if(FormName == forms[i])
        {
            index = i;
            std::cout << "Intern creates " << FormName << std::endl;
            break;
        }
    }
    switch(index)
    {
        case 0:
            return new ShrubberyCreationForm(FormTarget);
        case 1:
            return new RobotomyRequestForm(FormTarget);
        case 2:
            return new PresidentialPardonForm(FormTarget);
        default:
            std::cout << "Intern couldn't find the form: " << FormName << std::endl;
    }
    return(NULL);
    
}

Intern::~Intern()
{}
