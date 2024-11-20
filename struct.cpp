#include <iostream>

using namespace std;

struct myCar //Using myCar help to create variable.
{
    int price;
    string color;
    string model;
};

int main()
{
    myCar carAnup;
    carAnup.price = 1000;
    
    cout << "Price of Anup Car: " << carAnup.price << "$.";

    return 0;
}