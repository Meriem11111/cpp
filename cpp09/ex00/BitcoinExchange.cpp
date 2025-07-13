#include "BitcoinExchange.hpp"

void BitcoinExchange::checkDate(std::string& Date)
{

    if (Date.empty())
    {
        std::cout << "Invalid Date: empty\n";
        return;
    }

    int year, month, day;

    if(Date.length() != 10)
    {
        std::cout << "Invalid Date Format 1::: " << Date << std::endl;
        return;
    }
    if(Date[4] != '-' || Date[7] != '-')
    {
        std::cout << "Invalid Date Format 2:::: " << Date << std::endl;
        return;
    }

    for(int i = 0; i < Date.length(); i++) 
    {
        if(i == 4 || i == 7)
        {
            continue;
        }
        else{
            if(!isdigit(Date[i]))
            {
                std::cout << "Invalid Date Format 3::: " << Date << std::endl;
                return;
            }
        }
    }


    year = std::stoi(Date.substr(0, 4));
    month = std::stoi(Date.substr(5, 2));
    day = std::stoi(Date.substr(8, 2));
    // std::cerr << "Year   === " << year <<std::endl;
    // std::cerr << "month  === " << month <<std::endl;
    // std::cerr << "day    === " << day <<std::endl;

    if(year < 2009 || year > 2022)
    {
        std::cout << "Invalid Year : " << year << std::endl;
        return;
    }

    if(month < 1 || month > 12)
    {
        std::cout << "Invalid Month : " << month << std::endl;
        return;
    }

    if(day < 1 || day > 31)
    {
        std::cout << "Invalid Day : " << day << std::endl;
        return;
    }
    
}

void BitcoinExchange::checkValue(std::string& Value)
{

    if (Value.empty())
    {
        std::cout << "Invalid Value: empty\n";
        return;
    }

    int dotCount = 0;
    int Count = 0;
    int plusCount = 0;
    for (size_t i = 0; i < Value.length(); ++i)
    {
        char c = Value[i];

        if (c == '.')
        {
            dotCount++;
            if (dotCount > 1 || i == 0 || i == Value.length() - 1)
            {
                std::cout << "Invalid Value Format ::: " << Value << std::endl;
                return;
            }
        }
        else if (c == '-')
        {
            Count++;
            if (i != 0 || Count > 1)
            {
                std::cout << "Invalid Value Format ::: " << Value << std::endl;
                return;
            }
        }
         else if (c == '+')
    {
        plusCount++;
        if (i != 0 || plusCount > 1)
        {
            std::cout << "Invalid Value Format ::: " << Value << std::endl;
            return;
        }
    }
        else if (!isdigit(c))
        {
            std::cout << "Invalid Value Format ::: " << Value << std::endl;
            return;
        }
    }


    try {
        
    float value = std::stof(Value);
    // std::cout << "VALUE FLOAT ======= : " << value << std::endl;

    if (value < 0)
    {
        std::cout << "Checking value: '" << value << "'\n";
        std::cout << "Error: not a positive number. " <<  std::endl;
      
    } 

     if (value > 1000)
    {
        std::cout << "Error: too large a number. " <<  std::endl;
       
    } 
    }
    catch(const std::exception& e)
    {
        std::cout << "Error converting value: " << Value << std::endl;
    }

}

void BitcoinExchange::CheckDate_Value(std::string& Date, std::string& Value)
{
    Date.erase(0, Date.find_first_not_of(" \t\n"));
    Date.erase(Date.find_last_not_of(" \t\n") + 1);
    Value.erase(0, Value.find_first_not_of(" \t\n"));
    Value.erase(Value.find_last_not_of(" \t\n") + 1);


    // std::cout <<"-------------------------------" << std::endl;
    // std::cout << "date aftr " << Date << " ----  value  aftr::  " << Value << std::endl;
    // std::cout <<"-------------------------------" << std::endl;


    checkDate(Date);
    checkValue(Value);

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
        // std::cout << "date === " << date << " ----  value ===  " << value << std::endl;

        CheckDate_Value(date, value);
    }
    file.close();
}
