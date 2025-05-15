
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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

        class GradeLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        

};



std::ostream& operator<<(std::ostream& out, Bureaucrat &bureaucrat);

#endif