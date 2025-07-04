#include "Span.hpp"

Span::Span(unsigned int n)
{
    N = n;
}

Span::Span(const Span& org)
{
    *this = org;
}

Span& Span::operator=(const Span& org) 
{
    if(this != &org)
    {
        N = org.N;
    }
    return(*this);
}

Span::~Span()
{}

void Span::DisplayArray()
{
    for (std::vector<int>::iterator it = arr.begin() ; it != arr.end() ; it++)
    {
        std::cout << *it << std::endl;
    }
}

void Span::addNumber(int number)
{
    try {
        if(N > arr.size())
        {
            arr.push_back(number);
            std::cout << number << " is added !" << std::endl;
           
        }
        else
            throw std::out_of_range("Can't add more numbers , array is FULL.");

    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl; 
    }
}


int Span::longestSpan()
{
     if (arr.size() < 2)
        throw std::runtime_error("Cannot find the longest span!");

    int min = *std::min_element(arr.begin(), arr.end());
    int max = *std::max_element(arr.begin(), arr.end());
    return max - min;
}
int Span::shortestSpan()
{
     if (arr.size() < 2)
        throw std::runtime_error("Cannot find the shortest span!");
    int shortest = INT_MAX;
    int diff = 0;
    std::sort(arr.begin(), arr.end());
    for (unsigned int i = 0; i + 1 < arr.size(); i++)
    {
        diff = arr[i + 1]- arr[i];
        // std::cout << "diff == " << diff << std::endl;
        if (shortest > diff)
            shortest = diff;
    }
    return (shortest);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(arr.size() + std::distance(begin, end) > N)
        throw std::runtime_error("Cannot add numbers");
    arr.insert(arr.end(), begin, end);
}

unsigned int Span::sizeLeft() const
{
    // if (arr.size() >= N)
    //     return 0;
    return(N - arr.size());
}
