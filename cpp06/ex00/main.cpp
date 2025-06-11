#include <iostream>
#include <cmath> // for sqrt

// int main() {
//     double a = std::sqrt(-2);  // Square root of a negative number
//     // double a = 1.0 / 0.0;//inf
//     // double a = -1.0 / 0.0; // a = -inf

//     std::cout << a << std::endl; // Output: nan
// }


#include <iostream>
#include <sstream>
#include <string>

// int main() {
//     std::string sentence = "C++ 42.8j";
//     std::istringstream iss(sentence);
//     std::string word;

//     while (iss >> word) {  // Extracts one word at a time
//         std::cout << word << std::endl;
//     }
// }

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "error " << std::endl;
        return(1);
    }
    ScalarConverter::convert(av[1]);
    return (0);
}
