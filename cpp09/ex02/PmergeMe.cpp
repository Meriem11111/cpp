#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}

// PmergeMe(const PmergeMe& org);
// PmergeMe& operator=(const PmergeMe& org);

bool PmergeMe::Check(const std::string &input)
{
    size_t i = 0;

    if(input[i] == '+')
        i++;
    if (i == input.size())
        return false;
    for( ;i < input.size(); i++)
    {
        if(!std::isdigit(input[i]))
            return false;
    }
    
    int nb = std::stoi(input);
    
    std::vector<int>::iterator it = std::find(v.begin(), v.end(), nb);
    if( it != v.end())
    {
        return false;
    }
    
    v.push_back(nb);
    d.push_back(nb);
    

    return true;
}

template <typename Container>
Container JacobsthalIndex(size_t max)
{
    Container arr;
        //  std::cout << "MAX == --------->  :  " << max << std::endl;


    if(max <= 1)
        return arr;
    size_t j0 = 0;
    size_t j1 =1;
    while(true)
    {
        size_t next = j1 + 2 * j0;
        if(next >= max)
            break;
        arr.push_back(next);
        j0 = j1;
        j1 = next; 
        //   std::cout << "ARR == --------->  :  " << next << std::endl;
    }
    return arr;
}


void PmergeMe::SortVector(std::vector<int>& vtr)
{
    
    std::vector<int> largest;
    std::vector<int> smallest;
    std::vector<int> sorted;
    int a, b, odd;
    bool is_odd = false;

    
    if(vtr.size() % 2 != 0 )
    {
        is_odd = true;
        odd = vtr.back();
        vtr.pop_back();

    }
    for (std::vector<int>::iterator it = vtr.begin(); it != vtr.end(); it += 2)
    {
       
        a = *it;
        b = *(it + 1);

        largest.push_back(std::max(a, b));
        smallest.push_back(std::min(a, b));
    }

    if (largest.size() > 1)
    {
        std::vector<std::pair<int, int>> pairs;

        for(size_t i = 0; i < largest.size() ; i++)
        {
            pairs.push_back(std::make_pair(largest[i], smallest[i]));
        }
        std::sort(pairs.begin(), pairs.end());

        for(size_t i = 0; i < largest.size() ; i++)
        {
            largest[i] = pairs[i].first;
            smallest[i] = pairs[i].second;
        }
    }

    sorted = largest;
    
    std::vector<size_t> jcb = JacobsthalIndex<std::vector<size_t>>(smallest.size());
    
    sorted.insert(sorted.begin(), smallest[0]);

    int prev = 0;
    
    for(std::vector<size_t>::iterator it_jcb = jcb.begin(); it_jcb != jcb.end(); it_jcb++)
    {
        for(size_t k = *it_jcb ; k > prev ; --k)
        {
            std::vector<int>::iterator index;

            index = std::lower_bound(sorted.begin(), sorted.end(), smallest[k]);
            sorted.insert(index, smallest[k]);
        }
        prev = *it_jcb; 
    }

    if(prev + 1 < smallest.size() )
    {
        while(prev+1 < smallest.size() )
        {
            std::vector<int>::iterator index;
            index = std::lower_bound(sorted.begin(), sorted.end(), smallest[prev + 1]);
            sorted.insert(index, smallest[prev+1]);
            prev++;
        }
    }

    if(is_odd)
    {
        std::vector<int>::iterator index;
        index = std::lower_bound(sorted.begin(), sorted.end(), odd);
        sorted.insert(index, odd); 
    }
    
    vtr = sorted;

}


void PmergeMe::SortDeque(std::deque<int>& dq)
{

    std::deque<int> largest;
    std::deque<int> smallest;
    std::deque<int> sorted;
    int a, b, odd;
    bool is_odd = false;

    
    if(dq.size() % 2 != 0 )
    {
        is_odd = true;
        odd = dq.back();
        dq.pop_back();

    }
    for (std::deque<int>::iterator it = dq.begin(); it != dq.end(); it += 2)
    {
       
        a = *it;
        b = *(it + 1);

        largest.push_back(std::max(a, b));
        smallest.push_back(std::min(a, b));
    }

    if (largest.size() > 1)
    {
        std::deque<std::pair<int, int>> pairs;

        for(size_t i = 0; i < largest.size() ; i++)
        {
            pairs.push_back(std::make_pair(largest[i], smallest[i]));
        }
        std::sort(pairs.begin(), pairs.end());

        for(size_t i = 0; i < largest.size() ; i++)
        {
            largest[i] = pairs[i].first;
            smallest[i] = pairs[i].second;
        }
    }

    sorted = largest;
    
   std::deque<size_t> jcb = JacobsthalIndex<std::deque<size_t>>(smallest.size());

    
    sorted.insert(sorted.begin(), smallest[0]);

    int prev = 0;
    
    for(std::deque<size_t>::iterator it_jcb = jcb.begin(); it_jcb != jcb.end(); it_jcb++)
    {
        for(size_t k = *it_jcb ; k > prev ; --k)
        {
            std::deque<int>::iterator index;
            // std::cout << "smallest[k] == " << smallest[k] <<std::endl; 
            index = std::lower_bound(sorted.begin(), sorted.end(), smallest[k]);
            sorted.insert(index, smallest[k]);
        }
        prev = *it_jcb; 
    }

    if(prev + 1 < smallest.size() )
    {
        while(prev+1 < smallest.size() )
        {
            std::deque<int>::iterator index;
            index = std::lower_bound(sorted.begin(), sorted.end(), smallest[prev + 1]);
            sorted.insert(index, smallest[prev+1]);
            prev++;
        }
    }

    if(is_odd)
    {
        std::deque<int>::iterator index;
        index = std::lower_bound(sorted.begin(), sorted.end(), odd);
        sorted.insert(index, odd); 
    }
    
    dq = sorted;

}


void PmergeMe::start()
{
    std::cout << "Before :  ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout  << *it << " ";
    }
    std::cout << std::endl; 
    
    size_vec = v.size();
    size_dq = d.size();
    
    clock_t start = clock();
    SortVector(v);
    clock_t end = clock();
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

    clock_t start_d = clock();
    SortDeque(d);
    clock_t end_d = clock();
    double elapsed_time_d = static_cast<double>(end_d - start_d) / CLOCKS_PER_SEC * 1e6;


   
    std::cout << "After :   ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout  << *it << " ";
    }
    std::cout << std::endl; 


   
    std::cout << "Time to process a range of " << size_vec << " elements with std::vector : " << std::fixed << std::setprecision(5)
                << elapsed_time << " us" << std::endl;
    std::cout << "Time to process a range of " << size_dq << " elements with std::deque : " << std::fixed << std::setprecision(5)
                << elapsed_time_d << " us" << std::endl;
}


