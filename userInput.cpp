#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;

    std::cout << "What is your name? \n"; // Output
    std::cin >> name; // Input
    std::cout << "My name is " << name << "."; //Output

    return 0;
}