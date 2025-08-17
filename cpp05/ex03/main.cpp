#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int main() {
    try {
        Intern intern;
        Bureaucrat boss("mrym", 3); 

        
        Form* form = intern.makeForm("robotomy request", "employee");
        Form* form1 = intern.makeForm("presidential pardon", "employee1");
        Form* form2 = intern.makeForm("Shrubbery creation", "employee2");

        std::cout <<"-------------------------------------------------------" << std::endl;
        if(form)
        {
            // Bureaucrat signs the form
            boss.signForm(*form);

            // Bureaucrat executes the form
            boss.executeForm(*form);
            
            delete form;
        }
        std::cout <<"-------------------------------------------------------" << std::endl;
        if(form1)
        {
            // Bureaucrat signs the form1
            boss.signForm(*form1);
            
            // Bureaucrat executes the form1
            boss.executeForm(*form1);
            
            
            delete form1;
        }
        std::cout <<"-------------------------------------------------------" << std::endl;
        if(form2)
        {
            // Bureaucrat signs the form2
            boss.signForm(*form2);

            // Bureaucrat executes the form2
            boss.executeForm(*form2);

            
            delete form2;
        }
        
    }
    catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

