#include<iostream>

namespace first_pi{
    int pi = (double) 3.14; //This doesn't help in explicit conversion
}

int main()
{
    using std::cout;
    int pi = 3.14;

    int answer = 5;
    int question = 10;
    double percent = (double)answer/question * 100;

    cout << pi << "\n"; // implict type-conversion; it converts 3.14 (double) into 3 (int)
    cout << first_pi::pi; // explicit conversion; the value is previously truncated so u can't access 0.14
    cout << "\nYou got " << percent <<  "% in your exam."; // another explicit conversion
    
    return 0;
}