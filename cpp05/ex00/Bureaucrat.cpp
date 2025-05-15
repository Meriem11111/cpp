
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name) 
{
    if(grade < 1)
        throw GradeHighException(); 
    else if(grade > 150)
        throw GradeLowException(); // heere i throw an instance of the object 
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
        throw GradeHighException(); 
    else
        this->Grade--;
}

void Bureaucrat::decrement()
{
    if(Grade + 1 > 150)
        throw GradeLowException();
    this->Grade++;
}

const char* Bureaucrat::GradeLowException::what() const throw()
{
    return("Grade too Low");
}

const char* Bureaucrat::GradeHighException::what() const throw()
{
    return("Grade too High");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << " , bureaucrat grade " << bureaucrat.getGrade() ;
    return(out); 
}
