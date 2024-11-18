#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}
int main()
{
    using std::cout;

    int x = 0;
    // Namespace prevents name conflicts especially in large projects.
    std::cout << x; // It prints var within the local space.

    using namespace first; //notice how using this avoid writing extra bit of words like in 17 line
    // It might not work due to incorrect position but if it were to initialize right away after main(), then it'd probably work.
    cout << x; // It prints x within first_'name_space' and "::" is scope resolution operator
    cout << second::x; // It prints x within second_'name_space' and "::" is scope resolution operator

    return 0;
}