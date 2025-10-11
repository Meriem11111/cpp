#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
    // ====== VECTOR TEST ======
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.pop_back();

    std::cout << "--- Testing std::vector ---" << std::endl;
    easyfind(vec, 20);   
    easyfind(vec, 50);   

    // ====== LIST TEST ======
    std::list<int> lst;
    lst.push_front(5);
    lst.push_back(15);
    lst.push_back(25);


    std::cout << "\n--- Testing std::list ---" << std::endl;
    easyfind(lst, 5);    
    easyfind(lst, 42);   

    // ====== DEQUE TEST ======
    std::deque<int> dq;
    dq.push_back(100);
    dq.push_front(200);
    dq.push_back(300);

    std::cout << "\n--- Testing std::deque ---" << std::endl;
    easyfind(dq, 200); 
    easyfind(dq, 500);   

    return 0;
}
