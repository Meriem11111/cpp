
#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string Name;
        bool isSigned;
        const int GradeToSign;
        const int GradeToExecute;
        const std::string target;
    public:
        Form();
        Form(std::string namee, std::string target,int toSign, int toExecute);
        virtual ~Form();
        Form(const Form& other);
        Form& operator=(const Form& other);
        std::string getName() const;
        std::string getTarget() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getIsSigned() const;
        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual void executeAction() const = 0;
        

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

        class FormNotSignedException : public  std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        

};


std::ostream& operator<<(std::ostream& out, const Form& form);

#endif