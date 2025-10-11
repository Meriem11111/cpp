#include "Span.hpp"

int main()
{
    Span s(10000);

    try{

         // sp.addNumber(6);
    s.addNumber(3);
    s.addNumber(17);
    s.addNumber(9);
    s.addNumber(11);
    //  s.DisplayArray();
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
   

    try 
    {
        std::cout << "longest span :: " << s.longestSpan() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }


    try 
    {
        std::cout << "shortest span :: " << s.shortestSpan() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::srand(std::time(0));
    std::vector<int> v;
    int remaining = s.sizeLeft();
   
    for (int i = 0 ; i < remaining; i++)
    {
        v.push_back(std::rand() % 10);
    }

    try{
        s.addRange(v.begin(), v.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    s.DisplayArray();
    return 0;
}