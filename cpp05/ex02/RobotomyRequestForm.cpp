


#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("", "", 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other)
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if(this != &other)
    {
        *this = other;
    }
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "Makes some drilling noises" << std::endl;
    if(rand() % 2 == 0)
    {
        std::cout << getTarget() <<" has been robotomized " << std::endl;
    }
    else
        std::cout << " the robotomy failed " << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(!getIsSigned())
    {
        throw Form::FormNotSignedException();
    }
    else if(executor.getGrade() > getGradeToExecute()) //should be equal or less than grade to execute to be valid 
    {
        throw Bureaucrat::GradeTooLowException();
    }
    executeAction();

}
