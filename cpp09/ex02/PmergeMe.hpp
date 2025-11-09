#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include<cctype>
#include<algorithm>
#include<ctime>
#include <iomanip>
#include <utility>



class PmergeMe
{
    private:
        std::vector<int> v;
        std::deque<int> d;
    public: 
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& org);
        PmergeMe& operator=(const PmergeMe& org);

        int number;
        size_t size_vec;
        size_t size_dq;
        bool Check(const std::string &input);
        void SortVector(std::vector<int>& vtr);
        void SortDeque(std::deque<int>& vtr);
        void start();

};
std::vector<size_t> JacobsthalIndex(size_t max);
#endif
