// my first program in C++
#include <iostream>
#include <time.h>
#include <vector>

int main()
{/*
   int time = clock();
   std::cout << clock() << "\n";
   int timeB = time + 100;
   while (clock() < timeB) {
     std::cout << "cow";
   }*/
   using namespace std;
   int arr[5] = {1,2,3,4,5};
   int *point = arr;
   vector<int> v(arr, arr + 5);
   for (int i=0;i<(v.size());i++) {
     cout << v[i] << endl;
   }
}
