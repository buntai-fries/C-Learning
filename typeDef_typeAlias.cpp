#include <iostream>

typedef std::string name_t;
//using namespace name_t == std::string; (this syntax can also be used instead of typedef)

int main()
{
    using std::cout;
    name_t name = "Amdys";
    cout << name;
    return 0;
}