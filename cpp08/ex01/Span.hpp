#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <climits>

class Span
{
    private:
        unsigned int N;
        std::vector <int> arr;
        unsigned int size;

    public:
        Span(unsigned int n);
        Span(const Span& org);
        Span& operator=(const Span& org);
        ~Span();

        void addNumber(int number);
        void DisplayArray();
        int longestSpan();
        int shortestSpan();


};

#endif