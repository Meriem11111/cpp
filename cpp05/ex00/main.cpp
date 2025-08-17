#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat employee("MRYM", 1);
        employee.increment();

        std::cout << "Grade is = " << employee.getGrade() <<std::endl;
        std::cout << "Grade is valid." << std::endl;

        std::cout << employee << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << "Catch an exeception :: " << e.what() << std::endl;
    }
}
