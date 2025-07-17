#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fstream>
#include <stack>
#include<cctype>
#include <sstream>

class RPN
{
    private:
        std::stack<int> rpn;
        int result;
    public:
        RPN();
        ~RPN();
        RPN(const RPN& org);
        RPN& operator=(const RPN& org);


        void processRPN(const std::string& input);

        
         void display(std::stack<int> out); 
        bool isOperator(char c);
};

#endif