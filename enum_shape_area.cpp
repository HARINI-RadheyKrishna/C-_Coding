//Define an enum class to represent different shapes and calculate the area of a given shape
#include <iostream>

enum class shape {circle, square, rectangle};

double calculate_area (shape area, int side1, int side2 = 0)
{
    switch (area){
        case (shape::circle):
            return 3.14 * side1 *side1;
        case (shape::square):
            return side1 * side1;
        case (shape::rectangle):
            return side1 * side2;
    }
}

int main()
{
    shape area = shape::circle;
    double out = calculate_area(area, 4);
    std::cout << "Area: " << out << std::endl;
    return 0;
}