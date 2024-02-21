//Finding the maximum value among the list of elements in a vector
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> input = {5,78,45,23,89,10,4,32,3};
    std::vector<int>::iterator it;
    int max = 0;

    for (it = input.begin(); it != input.end(); ++it)
    {
        if (max < *it)
            max = *it;
    }

    std::cout << max << std::endl;
}