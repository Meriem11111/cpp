#include "iter.hpp"

int main()
{
    int arr[4] = {1, 3, 6, 2};
    char characters[5] = {'m', 'r', 'y', 'm', 'a' };
    std::string strs[3] = {"hi", "hello", "test"};

    iter(arr, 4, function<int>);
    iter(characters, 2, function<char>);
    iter(strs, 3, function<std::string>);
}
