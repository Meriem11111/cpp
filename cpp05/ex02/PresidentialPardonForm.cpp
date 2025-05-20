
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("", "",25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", target,25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other)
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if(this != &other)
    {
        *this = other;
    }
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::executeAction() const
{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
