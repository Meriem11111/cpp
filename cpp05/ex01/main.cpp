#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat employee("MRYM", 3);
        employee.decrement();

        std::cout << "Grade is = " << employee.getGrade() <<std::endl;
        std::cout << "Grade is valid." << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << "Catch an exeception :: " << e.what() << std::endl;
    }
}
