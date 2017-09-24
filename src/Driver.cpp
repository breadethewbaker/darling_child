// start a new game when run
#include "driver.h"

int main() {
  Person one_guy("Brett", "Baker");
  //one_guy.printAge();
  while(1) {
    one_guy.timeEffects(10);
    one_guy.printStats();
    wait(100);
  }
  return 0;
}

void wait(int t) {
  // int goal = t + clock();
  // while (clock() < goal);

  int time = clock();
  int timeB = time + t * 1000;
  while (clock() < timeB) {
    // std::cout << "cow";
  }
}
