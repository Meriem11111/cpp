#include "easyfind.hpp"


int main()
{
    std::vector<int> v = {3, 4, 55, 6, 7, 0};

    v.push_back(2);
    // easyfind(v, 2);
    std::sort(v.begin(), v.end());
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << "-----> " << *it << std::endl;
    }
    
     std::cout << "------------------------------------------ "<< std::endl;

    std::list<int> l;
    l.push_back(2);
    l.push_back(7);
    l.push_back(3);
    l.push_front(1);
    l.push_front(0);

    
    // easyfind(l, 0);
    l.sort(std::greater<int>());
    // l.sort();
    for(std::list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        std::cout << "-----> " << *it << std::endl;
    }

    return 0;
}