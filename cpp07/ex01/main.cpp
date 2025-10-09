#include "iter.hpp"

int main()
{
    int arr[4] = {1, 3, 6, 2};
    const char characters[5] = {'a', 'r', 'y', 'm', 'a' };
    std::string strs[3] = { "hello", "test"};

    iter(arr, 4, function<int>);
   
    iter(characters, 2, function<char>);
    iter(strs, 2, function<std::string>);
    return 0;
}
