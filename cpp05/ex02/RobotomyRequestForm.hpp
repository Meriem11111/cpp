#ifndef ROBOTOMYREAUESTFORM_HPP
#define ROBOTOMYREAUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
        void executeAction() const;
        

};

#endif