#include <iostream>

int main()
{
    int arrInt[5] = {1,2,3,4,5}; // u can "omit" the array but it's better to use/specify the size
    int memory_arrInt = sizeof(arrInt); // it's memory size of array 1 int = 4 byte, yeah it is represented in byte if u print this out, u will likely get 4*5=20!
    int size_arrInt = sizeof(arrInt)/sizeof(arrInt[0]); // 20/4 = 5 --> size of ur array

    std::cout << "The size of your array is : " << size_arrInt;

    return 0;
}