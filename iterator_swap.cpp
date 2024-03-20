#include <iostream>
#include <vector>

void reverseVector(std::vector<int>& vec) {
    // Define iterators for the vector
    auto itBegin = vec.begin();
    auto itEnd = vec.end() - 1; // Set iterator to the last element

    // Iterate through the vector and swap elements
    while (itBegin < itEnd) {
        std::swap(*itBegin, *itEnd); // Swap elements
        ++itBegin; // Move the begin iterator forward
        --itEnd; // Move the end iterator backward
    }
}