#include <iostream>

using namespace std;

int main()
{
    int price = 100;
    int* ptr = &price; // there are different ways to declare pointer but this is preferred ways.

    cout << &price << endl; // & is called reference operator
    cout << ptr << endl;
    cout << *ptr <<endl; // de-referencing
    // Use of * sign:
    //-->When used in declaration (string* ptr), it creates a pointer variable.
    //-->When not used in declaration, it act as a dereference operator.
    
    *ptr = 1000;
    cout << *ptr << endl;
    cout << price << endl;
    cout << &price << endl; // notice that with change in value, the address don't change rather the value changes!

    return 0;
}