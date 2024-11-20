#include <iostream>

using namespace std;

enum status 
{
    Low, // the default value of enum is zero.
    Medium,
    High
};

enum dayNum // Let's see how we can use enum, here we are using the 'day' switch-case example:
{
    Sun = 1, // now the number is initialized to other var "serially"
    Mon,
    Tues,
    Wednes,
    Thurs,
    Fri,
    Satur
};

int main()
{
    // enum name_enum varName = content_enum;
    enum status level = Low;
    cout << level << endl;

    enum dayNum day = Thurs;

    switch (day)
    {
        case 1:
            cout << "Sunday";
            break;

        case 2:
            cout << "Monday";
            break;

        case 3:
            cout << "Tuesday";
            break;

        case 4:
            cout << "Wednesday";
            break;

        case 5:
            cout << "Thursday";
            break;

        case 6:
            cout << "Friday";
            break;

        case 7:
            cout << "Saturday";
            break;
    }

    return 0;
}