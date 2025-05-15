#include "Form.hpp"

Form::Form(std::string namee, int toSign, int toExecute) : Name(namee) , GradeToSign(toSign) , GradeToExecute(toExecute)
{
    this->isSigned = false;
    if(GradeToSign < 1 || GradeToExecute < 1)
        throw GradeTooHighException();
    else if(GradeToSign > 150 || GradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form():  Name("") , GradeToSign(150) , GradeToExecute(150)
{
    this->isSigned = false;
}

Form::~Form(){}

Form::Form(const Form& other) : Name(other.Name) , GradeToSign(other.GradeToSign) , GradeToExecute(other.GradeToExecute)
{
    if(GradeToSign < 1 || GradeToExecute < 1)
        throw GradeTooHighException();
    else if(GradeToSign > 150 || GradeToExecute > 150)
        throw GradeTooLowException();
}   

Form& Form::operator=(const Form& other)
{
    if(this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return(*this);
}

std::string Form::getName() const
{
    return(Name);
}

int Form::getGradeToSign() const
{
    return(GradeToSign);
}

int Form::getGradeToExecute() const
{
    return(GradeToExecute);
}

bool Form::getIsSigned() const
{
    return(isSigned);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade() <= this->GradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();

}

const char* Form::GradeTooLowException::what() const throw()
{
    return("Grade too Low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return("Grade too High");
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << "Form Name           :: " << form.getName() << std::endl;
    out << "Form GradeToSign    :: " << form.getGradeToSign() << std::endl;
    out << "Form GradeToExecute :: " << form.getGradeToExecute() << std::endl;
    return(out);
}

