#include "RPN.hpp"

RPN::RPN()
{
   result = 0;
}

RPN::~RPN()
{}

RPN& RPN::operator=(const RPN& org)
{
    if (this != &org) 
    {
        this->result = org.result; 
        this->rpn = org.rpn; 
    }
    return *this;
}

RPN::RPN(const RPN &org) : rpn(org.rpn), result(org.result) {}

bool RPN::isOperator(char c)
{
    return c == '+' || c == '-' || c == '/' || c == '*';
}

void RPN::processRPN(const std::string& input)
{
    if (input.empty())
    {
        std::cerr << "Error: empty input" << std::endl;
        return;
    }
    std::string token;

    std::istringstream iss(input);

    while(iss >> token)
    {
        if(token.size() == 1 && std::isdigit(token[0]))
        {
            rpn.push(token[0] - '0');
            // std::cout << "token == "<< token[0]-'0' << std::endl;
            
        }
        else 
        {
            if(token.size() == 1 && isOperator(token[0]))
            {
                if(rpn.size() < 2)
                {
                    std::cerr << "Error" << std::endl;
                    return;
                }
                else
                {
                    int first = rpn.top();
                    rpn.pop();
                    int second = rpn.top();
                    rpn.pop();  

                    switch(token[0])
                    {
                        case '+':
                            result = second + first  ;
                            break;
                        case '-':
                            result = second - first  ;
                            break;
                        case '*':
                            result = second * first  ;
                            break;
                        case '/':
                            if(first == 0)
                            {
                                std::cerr << "Error :: cannot devide by 0 !"<< std::endl;
                                return;
                            }
                            result = second / first  ;
                            break;
                            
                    }
                    rpn.push(result);
                }
            }
            else
            {
                std::cerr << "Error "<< std::endl;
                return;
            }

        }

    }
    if (rpn.size() == 1)
        std::cout <<  result<< std::endl;
    else if (!rpn.empty())
    {
        std::cerr << "Error" << std::endl;
    }
    // display(rpn);
    

}

// void RPN::display(std::stack<int>& out)  {
//     while (!out.empty())
//     {
//         std::cout << "stack === " << out.top() << std::endl;
//         out.pop();
//     }
// }
