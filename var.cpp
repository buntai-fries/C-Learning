#include<iostream>

int main()
{
    // Int
    int apple_red = 1; //initialize; no input
    int apple_green = 2; //initialize; no input
    int apple = apple_green + apple_red;
    // Double
    double apple_price = 10.02; //initialize; no input
    // Character
    char currency = '$'; // notice 'char' btw : we can't "char"!!!
    // Boolean
    bool const boy = true; // I am boy so it is constant.
    // String
    std::string name = "Anup"; //initialize; no input
    // Print
    std::cout << boy; // notice how it throws 1 and not true
    std::cout << "\n A boy name " << name << " bought " << apple << " apple " << " that cost " << apple_price << currency << "."; //print the result.
    return 0;
}