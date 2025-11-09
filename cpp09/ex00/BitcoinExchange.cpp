#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& org) : btc(org.btc) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& org)
{
    if (this != &org)
        btc = org.btc;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::checkDate(std::string& Date)
{

    if (Date.empty())
    {
        std::cout << "Invalid Date: empty\n";
        return 0;
    }

    int year, month, day;

    if(Date.length() != 10)
    {
        std::cout << "Invalid Date Format 1::: " << Date << std::endl;
        return 0;
    }
    if(Date[4] != '-' || Date[7] != '-')
    {
        std::cout << "Invalid Date Format 2:::: " << Date << std::endl;
        return 0;
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
                return 0;
            }
        }
    }


    year = std::stoi(Date.substr(0, 4));
    month = std::stoi(Date.substr(5, 2));
    day = std::stoi(Date.substr(8, 2));
    

    if(year < 2009 || year > 2022)
    {
        std::cout << "Invalid Year : " << year << std::endl;
        return 0;
    }

    if(month < 1 || month > 12)
    {
        std::cout << "Invalid Month : " << month << std::endl;
        return 0;
    }

    if(day < 1 || day > 31)
    {
        std::cout << "Invalid Day : " << day << std::endl;
        return 0;
    }
    
    return 1;
}

bool BitcoinExchange::checkValue(std::string& Value, float& val)
{

    if (Value.empty())
    {
        std::cout << "Invalid Value: empty\n";
        return 0;
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
                return 0;
            }
        }
        else if (c == '-')
        {
            Count++;
            if (i != 0 || Count > 1)
            {
                std::cout << "Invalid Value Format ::: " << Value << std::endl;
                return 0;
            }
        }
        else if (c == '+')
        {
            plusCount++;
            if (i != 0 || plusCount > 1)
            {
                std::cout << "Invalid Value Format ::: " << Value << std::endl;
                return 0;
            }
        }
        else if (!isdigit(c))
        {
            std::cout << "Invalid Value Format ::: " << Value << std::endl;
            return 0;
        }
   }


    try {
        
    val = std::stof(Value);
    // std::cout << "VALUE FLOAT ======= : " << value << std::endl;

    if (val < 0)
     {
    //     std::cout << "Checking value: '" << value << "'\n";
        std::cout << "Error: not a positive number. " <<  std::endl;
        return 0;
      
    } 

     if (val > 1000)
    {
        std::cout << "Error: too large a number. " <<  std::endl;
        return 0;
       
    } 
    }
    catch(const std::exception& e)
    {
        std::cout << "Error converting value: " << Value << std::endl;
        return 0;
    }
    return 1;
}

void BitcoinExchange::CheckDate_Value(std::string& Date, std::string& Value)
{
    Date.erase(0, Date.find_first_not_of(" \t\n"));
    Date.erase(Date.find_last_not_of(" \t\n") + 1);
    Value.erase(0, Value.find_first_not_of(" \t\n"));
    Value.erase(Value.find_last_not_of(" \t\n") + 1);


    
    float value = 0;
    if (!checkDate(Date))
    {
        std::cerr << "Error: bad input => " << Date << "\n";
        return;
    }
    if (!checkValue(Value, value))
        return; 

    
    
    std::map<std::string, float>::iterator it = btc.lower_bound(Date);
    
    if(it == btc.begin() &&  it->first > Date )
    {
        std::cout << "Error: date too early: " << Date << std::endl;
        return;
        
    }

    if(it != btc.begin() && Date != it->first)
    {
        --it;
        
    }
    float result = it->second * value;
    std ::cout << Date <<  " => " << value << " = " << result << std::endl;


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
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, index);
        std::string value = line.substr(index + 3 , line.length());
        
        CheckDate_Value(date, value);
        // std::cout << "date === " << date << " ----  value ===  " << value << std::endl;
        
    }
    file.close();
}


void BitcoinExchange::ParseData(void)
{
    
    std::ifstream file("data.csv");
    if(!file.is_open())   
    {
        std::cerr << "Failed to open the file " << std::endl;
        return ;
    }
    std::string line;
    while(std::getline(file, line))
    {
        if(line == "date,exchange_rate")
            continue;
        size_t index = line.find(",");
        if (index  == std::string::npos)
        {
            continue;
        }
        std::string date = line.substr(0, index);
        std::string valueStr = line.substr(index + 1 , line.length());

        date.erase(0, date.find_first_not_of(" \t\n"));
        date.erase(date.find_last_not_of(" \t\n") + 1);
        valueStr.erase(0, valueStr.find_first_not_of(" \t\n"));
        valueStr.erase(valueStr.find_last_not_of(" \t\n") + 1);
         
        float value = std::stof(valueStr);
        btc[date] = value;

       
    }
    // display(btc); 
    file.close();
}

void BitcoinExchange::display(std::map<std::string, float>& out)
{
    for (std::map<std::string , float>::iterator it = out.begin(); it != out.end(); it++)
    {
        std::cout << "date[" <<  it->first << "]" << "=[" << it->second  <<"]" <<std::endl;
    }
}
