
#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>



class Data
{
    public:
        Data();
        ~Data();
        Data(const Data& org);
        Data& operator=(const Data& org);
        std::string str;
        uintptr_t num;
};

#endif