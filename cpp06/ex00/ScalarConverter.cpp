
#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter:: ScalarConverter(const ScalarConverter& obj)
{
    *this = obj;
}
ScalarConverter& ScalarConverter:: operator=(const ScalarConverter& obj)
{
   (void)obj;
    return (*this);
}

bool CheckFloat(const std::string &str)
{
    if(str[str.length() -1 ] != 'f')
        return false;

    size_t i = 0;
    int count = 0;

    if(str[i] == '+' || str[i] == '-')
        i++;
    
    while(i < str.length() - 1)
    {
        if(str[i] == '.' && count == 0)
        {
            i++;
            count++;
        }
        if(!std::isdigit(str[i]))
        {
            return false;
        }
        i++;
    }
    return true;
}


bool CheckDouble(const std::string &str)
{
    // if(str[str.length() -1 ] != 'f')
    //     return false;

    size_t i = 0;
    int count = 0;

    if(str[i] == '+' || str[i] == '-')
        i++;
    
    while(i < str.length() - 1)
    {
        if(str[i] == '.' && count == 0)
        {
            i++;
            count++;
        }
        if(!std::isdigit(str[i]))
        {
            return false;
        }
        i++;
    }
    return true;
}

bool checkDigit(const std::string &str)
{
    size_t i = 0;

    if(str[i] == '+' || str[i] == '-')
        i++;

    while(i < str.length())
    {
        if(!std::isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

void ScalarConverter::convert(const std::string &literal)
{
    if(literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
    {
        char c = literal[0];
        std::cout << "char: " << c <<std::endl;
        std::cout << "int: " << static_cast<int>(c)  <<std::endl;
        // std::cout << "float: " << static_cast<float>(c)  <<std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(c)  << 'f' <<std::endl;
        std::cout << "double: " << static_cast<double>(c)  <<std::endl;
        // std::cout << "double: " <<  std::fixed << std::setprecision(2) <<static_cast<double>(c)  <<std::endl;


    }
    else if(checkDigit(literal))
    {
        char *end;

        long nbr = std::strtol(literal.c_str(), &end, 10);
        if(nbr > INT_MAX || nbr < INT_MIN)
        {
            std::cout << "Error !" << std::endl;
            return;
        }
        std::cout << "int: " << static_cast<int>(nbr) <<std::endl;

        if(std::isprint(static_cast<char>(nbr)) ) // check >= 32 if i add it ??
            std::cout << "char: " << static_cast<char>(nbr) <<std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(nbr)  << 'f' <<std::endl;
        std::cout << "double: " <<  std::fixed << std::setprecision(2) <<static_cast<double>(nbr)  <<std::endl;

    }
    else if(CheckFloat(literal) || literal == "-inff" || literal == "+inff" || literal == "nanf")
    {
        if(literal == "-inff" || literal == "+inff" || literal == "nanf")
        {
            std::cout << "char: " << "impossible" <<std::endl;
            std::cout << "int: " << "impossible"  <<std::endl;
            std::cout << "float: " << literal <<std::endl;
            std::cout << "double: " << literal.substr(0, literal.length() - 1)  <<std::endl;
            return;
        }
        std::istringstream num(literal);
        double nbr ;
        num >> nbr;
        
        std::cout << "int: " << static_cast<int>(nbr) <<std::endl;

        if(std::isprint(static_cast<char>(nbr)) ) // check >= 32 if i add it ??
            std::cout << "char: " << static_cast<char>(nbr) <<std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(nbr)  << "f" <<std::endl;
        std::cout << "double: " <<  std::fixed << std::setprecision(2) <<static_cast<double>(nbr)  <<std::endl;
    }
     else if(CheckDouble(literal) || literal == "-inf" || literal == "+inf" || literal == "nan")
     {
         if(literal == "-inf" || literal == "+inf" || literal == "nan")
        {
            std::cout << "char: " << "impossible" <<std::endl;
            std::cout << "int: " << "impossible"  <<std::endl;
            std::cout << "float: " << literal <<'f'  <<std::endl;
            std::cout << "double: " << literal <<std::endl;
            return;
        }
        std::istringstream num(literal);
        double nbr ;
        num >> nbr;
        
        std::cout << "int: " << static_cast<int>(nbr) <<std::endl;

        if(std::isprint(static_cast<char>(nbr)) ) // check >= 32 if i add it ??
            std::cout << "char: " << static_cast<char>(nbr) <<std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(nbr)  << 'f' <<std::endl;
        std::cout << "double: " <<  std::fixed << std::setprecision(2) <<static_cast<double>(nbr)  <<std::endl;
    
     }
}
