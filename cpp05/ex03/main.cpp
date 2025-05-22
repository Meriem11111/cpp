#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int main() {
    try {
        Intern intern;
        Bureaucrat boss("mrym", 1); 

        
        Form* form = intern.makeForm("robotomy request", "Bender");


        // Bureaucrat signs the form
        boss.signForm(*form);

        // Bureaucrat executes the form
        boss.executeForm(*form);

        
        delete form;
    }
    catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

