#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
     try {
        Bureaucrat bureaucrat("mrym",11);
        Form form("formName", 15, 12);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    } catch (std::exception &e) 
    {
        std::cerr << "Catch an exeception :: " << e.what() << std::endl;
        
    }
    return(0);
}
