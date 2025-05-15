
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string Name;
        int Grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat&  operator=(const Bureaucrat& other);
        std::string getName() const;
        int getGrade() const;
        void  increment();
        void  decrement();
        void  signForm(Form& form) const;

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        

};



std::ostream& operator<<(std::ostream& out, const Bureaucrat &bureaucrat);

#endif