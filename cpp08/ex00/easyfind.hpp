#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
void easyfind(T& container, int to_find)
{
    for(typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        if (*it == to_find)
        {
            std::cout << *it << " Found !"<<std::endl;
            return;
        }
    }
    std::cout << to_find << " Not Found !"<<std::endl;
}

#endif