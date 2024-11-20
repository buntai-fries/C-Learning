#include <iostream>

using namespace std;

int main()
{
    string food = "Momo";
    string &lunch = food;
    lunch = "bhat"; // modifying the value changes, value of original-variable (var whose address is hold by it--> lunch!)

    //for food
    cout << food << endl;
    //for lunch
    cout << lunch;

    return 0;
}