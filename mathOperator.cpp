#include <cmath>
#include <iostream>

int main()
{
    double num;
    std::cout << "Enter any number whose sqaure you want to know : ";
    std::cin >> num;

    double z = (double) pow(num, 2.0); // power
    std::cout << "Square of " << num << " is : " << z << "\n";

    int a = abs(-4); //absolute
    std::cout << a;

    return 0;
}