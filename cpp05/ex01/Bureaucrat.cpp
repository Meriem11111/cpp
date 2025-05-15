
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name) 
{
    if(grade < 1)
        throw GradeTooLowException(); // heere i throw an instance of the object 
    else if(grade > 150)
        throw GradeTooHighException(); 
    else
        Grade = grade;
   
}


Bureaucrat::~Bureaucrat()
{}

Bureaucrat:: Bureaucrat(const Bureaucrat& other): Name(other.Name)
{
    this->Grade = other.Grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) 
{
    if(this != &other)
    {
        Grade = other.Grade;
    }
    return(*this);
}

std::string Bureaucrat:: getName() const
{
    return(this->Name);
}

int Bureaucrat::getGrade() const
{
    return(this->Grade);
}

void Bureaucrat::increment()
{
    if(Grade - 1 < 1)
        throw GradeTooLowException();
    else
        this->Grade--;
}

void Bureaucrat::decrement()
{
    if(Grade + 1 > 150)
        throw GradeTooHighException(); 
    this->Grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade too High");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade too Low");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << " , bureaucrat grade " << bureaucrat.getGrade() ;
    return(out); 
}
