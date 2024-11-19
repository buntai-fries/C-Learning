#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name : ";
    std::cin >> name; 

    if (name.length() == 6)
    {
        std::cout << "You are g*y !";
    }

    else
    {
        std::cout << "You are straight!";
    }

    return 0;
}