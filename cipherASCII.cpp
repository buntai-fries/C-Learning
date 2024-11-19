#include <iostream>

int main()
{
    /*
    char c1;
    char c2;
    char c3;
    char c4;
    char c5;
    */
   char c1, c2, c3, c4, c5;

   std::cout << "Type a word to cypher (ASCII-Version) : ";

   std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
   std::cout << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);

   return 0;
}