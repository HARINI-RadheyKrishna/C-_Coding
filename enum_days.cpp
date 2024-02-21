//Define an enum class to represent days of the week and print the name of a given day
#include <iostream>

int main()
{
    enum class days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    days today = days::Tuesday;

    switch (today){
        case (days::Monday):
            std::cout << "It is Monday " << static_cast<int>(days::Monday) << std::endl;
        case (days::Tuesday):
            std::cout << "It is Tuesday " << static_cast<int>(days::Tuesday) << std::endl;
        case (days::Wednesday):
            std::cout << "It is Wednesday " << static_cast<int>(days::Wednesday) << std::endl;
        case (days::Thursday):
            std::cout << "It is Thursday " << static_cast<int>(days::Thursday) << std::endl;
        case (days::Friday):
            std::cout << "It is Friday " << static_cast<int>(days::Friday) << std::endl;
        case (days::Saturday):
            std::cout << "It is Saturday " << static_cast<int>(days::Saturday) << std::endl;
        case (days::Sunday):
            std::cout << "It is Sunday " << static_cast<int>(days::Sunday) << std::endl;
        default:
            std::cout << " Please click on a different option. This is invalid" << std::endl;
    }
}