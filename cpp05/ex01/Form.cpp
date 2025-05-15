#include "Form.hpp"

Form::Form(std::string namee, int gradee) : Name(namee) , Grade(gradee)
{
    this->isSigned = false;
    if(Grade < 1)
        throw GradeTooHighException();
    else if(Grade > 150)
        throw GradeTooLowException();
}

Form::Form(): Name(""), Grade(150)
{
    this->isSigned = false;
}

Form::~Form(){};

Form::Form(const Form& other) : Name(other.Name) , Grade(other.Grade)
{
    this->isSigned = other.isSigned;
    if(Grade < 1)
        throw GradeTooHighException();
    else if(Grade > 150)
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

int Form::getGrade() const
{
    return(Grade);
}

bool Form::getIsSigned() const
{
    return(isSigned);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{

}

std::ostream& operator<<(std::ostream& out, Form& form)
{

}
