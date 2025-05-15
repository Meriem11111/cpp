
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Form
{
    private:
        const std::string Name;
        bool isSigned;
        const int Grade;
    public:
        Form();
        Form(std::string namee, int gradee);
        ~Form();
        Form(const Form& other);
        Form& operator=(const Form& other);
        std::string getName() const;
        int getGrade() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat& bureaucrat);

        class GradeTooLowException : public  std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooHighException : public  std::exception
        {
            virtual const char* what() const throw();
        };

};


std::ostream& operator<<(std::ostream& out, Form& form);

#endif