#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include<cctype>

class  BitcoinExchange
{

    public:
        void ParseFile(const char* readfile);
        void CheckDate_Value(std::string& Date, std::string& Value);
        void checkDate(std::string& Date);
        void checkValue(std::string& Value);
};

#endif