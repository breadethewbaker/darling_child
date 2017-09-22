// start a new game when run
#include "driver.h"

int main() {
  Person one_guy("Brett", "Baker");
  one_guy.printAge();
  while(1) {
    one_guy.timeEffects(10);
    one_guy.printStats();
    wait(1000);
  }
  return 0;
}

void wait(int t) {
  clock_t goal = t + clock();
  while (goal > clock());
}
