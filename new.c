// my first program in C++
#include <iostream>
#include <time.h>

int main()
{
   int time = clock();
   std::cout << clock() << "\n";
   int timeB = time + 100;
   while (clock() < timeB) {
     std::cout << "cow";
   }
}
