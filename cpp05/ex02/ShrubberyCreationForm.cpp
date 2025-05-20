#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form("", "", 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other)
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if(this != &other)
    {
        *this = other;
    }
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::executeAction() const
{
    std::string filename = this->getTarget() + "_shrubbery";
    std::ofstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Failed to create the file " << filename << std::endl;
        return;
    }
    file << "     ###" << std::endl;
    file << "    #o###" << std::endl;
    file << "  #####o###" << std::endl;
    file << "#o#\\#|#//###" << std::endl;
    file << " ###\\|//#o#" << std::endl;
    file << "  #  }|{  #" << std::endl;
    file << "     }|{" << std::endl;

    file.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
