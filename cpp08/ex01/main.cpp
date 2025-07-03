#include "Span.hpp"

int main()
{
    Span s(6);

    s.addNumber(12);
    s.addNumber(4);
    s.addNumber(7);
    s.addNumber(2);
    // s.addNumber(3);
    // s.addNumber(5);
    // s.addNumber(6);
    //  s.DisplayArray();

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
    
    return 0;
}