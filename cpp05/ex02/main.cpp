#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    try 
    {
        Bureaucrat bureaucrat("mrym", 3);
        PresidentialPardonForm president("prsdnt");

        bureaucrat.signForm(president);
        bureaucrat.executeForm(president);

        
    } 
    catch (std::exception &e) 
    {
        std::cerr << "Catch an exeception :: " << e.what() << std::endl;
        
    }
    return(0);
}
