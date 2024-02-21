//Iterating over a vector of elements and printing them
#include <iostream>
#include <vector>

void VecPrint (std::vector<int> input)
{
    std::vector<int>::iterator it1;

    std::cout << "vector elements are" << std::endl;

    for (it1 = input.begin(); it1 != input.end(); ++it1)
        std::cout << *it1 << std::endl;
}

int main()
{
    std::vector input = {1,2,4,6,77};
    VecPrint (input);
}