
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Form
{
    private:
        const std::string Name;
        bool isSigned;
        const int GradeToSign;
        const int GradeToExecute;
    public:
        Form();
        Form(std::string namee, int toSign, int toExecute);
        ~Form();
        Form(const Form& other);
        Form& operator=(const Form& other);
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat& bureaucrat);
        

        class GradeTooLowException : public  std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooHighException : public  std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};


std::ostream& operator<<(std::ostream& out, const Form& form);

#endif