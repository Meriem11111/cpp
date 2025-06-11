
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


#include <climits>
#include <iostream>
#include <cctype>    // std::isdigit, std::isprint
#include <iomanip>   //setpers , fixed

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter& operator=(const ScalarConverter& obj);

    public:
        static void convert(const std::string &literal);
};
#endif
