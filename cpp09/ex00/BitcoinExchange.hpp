#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>

class  BitcoinExchange
{

    public:
        void ParseFile(const char* readfile);
        void CheckDate_Value(std::string& Date, std::string& Value);
};

#endif