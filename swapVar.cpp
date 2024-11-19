#include <iostream>

int main()
{
    // for swapping, you can create a new variable that acts as empty glass (3-glass,2-full)
    // there is also another way to do so without using any variable
    int a = 1, b = 2, c;

    a = a + b; // 1+2=3
    b = a - b; // 3-2=1
    a = a - b; // 3-1=2
    // see a = 2 and b = 1; just opposite than declaration [swapped!!!]

    c = b;
    b = a;
    a = c;

    std::cout << "a : "<< a << "\n";
    std::cout << "b :" << b;

    return 0;
}