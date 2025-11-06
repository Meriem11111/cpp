#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <exception>
#include <algorithm>
#include <climits>
#include<ctime>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &src) : std::stack<T>(src) {}
        ~MutantStack(){}
        MutantStack &operator=(const MutantStack &src)
        {
            if (this != &src)
                std::stack<T>::operator=(src);
            return *this;
        }
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return(this->c.begin()); //std::deque<int> c; // stores the elements
        }
        iterator end()
        {
            return(this->c.end());
        }


};

#endif