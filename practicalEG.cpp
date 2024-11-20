#include <iostream>

using namespace std;

int main()
{
    int arrAge[5] = {15,16,18,25,30};
    float avgAge = 0, sum = 0;

    // Calculating the number of people
    int arrLen = sizeof(arrAge)/sizeof(arrAge[0]);

    // Suming the age of all people
    for (int i : arrAge)
    {
        sum += i;
    }

    // Average among given age:
    avgAge = (sum/arrLen);
    std::cout << avgAge << endl;

    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };


    cout << arrAge << endl;
    cout << letters;

    return 0;
}