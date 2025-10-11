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
        MutantStack() {}
        MutantStack(const MutantStack& org)
        {
            *this = org;
        }
        MutantStack& operator=(const MutantStack& org)
        {
            if(this != &org)
                *this = org;
            return(*this);
        }
        ~MutantStack() {}
        
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