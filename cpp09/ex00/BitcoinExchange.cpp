#include "BitcoinExchange.hpp"


void BitcoinExchange::CheckDate_Value(std::string& Date, std::string& Value)
{
    Date.erase(0, Date.find_first_not_of(" \t\n"));
    Date.erase(0, Date.find_first_not_of(" \t\n"));


    std::cout <<"-------------------------------" << std::endl;
    std::cout << "date aftr " << Date << " ----  value  aftr::  " << Value << std::endl;
    std::cout <<"-------------------------------" << std::endl;

}


void BitcoinExchange::ParseFile(const char*readfile)
{
    
    std::ifstream file(readfile);
    if(!file.is_open())   
    {
        std::cerr << "Failed to open the file " << std::endl;
        return ;
    }
    std::string line;
    while(std::getline(file, line))
    {
        if(line == "date | value")
            continue;
        size_t index = line.find(" | ");
        if (index  == std::string::npos)
        {
            std::cerr << "Error --> " << line <<std::endl;
            return ;
        }
        std::string date = line.substr(0, index);
        std::string value = line.substr(index + 3 , line.length());
        std::cout << "date === " << date << " ----  value ===  " << value << std::endl;

        CheckDate_Value(date, value);
    }
    file.close();
}
