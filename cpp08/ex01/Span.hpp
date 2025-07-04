#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <climits>
#include<ctime>

class Span
{
    private:
        unsigned int N;
        std::vector <int> arr;

    public:
        Span(unsigned int n);
        Span(const Span& org);
        Span& operator=(const Span& org);
        ~Span();

        void addNumber(int number);
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void DisplayArray();
        int longestSpan();
        int shortestSpan();

        unsigned int sizeLeft() const;


};

#endif