#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include<cctype>
#include <sstream>

class  BitcoinExchange 
{
    private:
        std::map<std::string, float> btc;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& org);
        BitcoinExchange& operator=(const BitcoinExchange& org);
        ~BitcoinExchange();
        void ParseFile(const char* readfile);
        void CheckDate_Value(std::string& Date, std::string& Value);
        bool checkDate(std::string& Date);
        bool checkValue(std::string& Value, float& val);
        void ParseData(void);

        void display(std::map<std::string, float>& out); 


        
};

#endif