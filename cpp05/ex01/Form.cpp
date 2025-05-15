#include "Form.hpp"

Form::Form(std::string namee, int gradee) : Name(namee) , Grade(gradee)
{
    this->isSigned = false;
}

Form::Form(): Name(""), Grade(150)
{
    this->isSigned = false;
}

Form::~Form(){};

Form::Form(const Form& other) : Name(other.Name) , Grade(other.Grade)
{
    this->isSigned = other.isSigned;
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

bool getisSigned() const
{
    
}
