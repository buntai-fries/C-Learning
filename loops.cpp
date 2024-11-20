#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    int k = 5; // if u use i in both do-while and for-loop or any loop, u need to update it's value first; reset

    while (i > 0)
    {
        cout << "The number is greater than zero" << endl;
        i--;
    }

    // The difference in while and do/while, do/while execute the code once although the condition might not be true !!!

    do {
        cout << "The number is greater than zero" << endl;
        k--;
    }
    while (k > 0);

    // As for "for-loop", it gives more control to user!
    for (int j = 5; j > 0; j--)
    {
        cout << "The number is greater than zero" << endl;
    }

    // There also exist another loop called "foreach-loop" (range-based loop) ; it is used in data-structure, i.e. array."
    int arrayInt[5] = {1,2,3,4,5};

    for (int num : arrayInt)
    {
        cout << num << endl;
    }

    return 0;
}