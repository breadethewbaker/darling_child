// start a new game when run
#include "driver.h"

int main() {
  Person one_guy("Brett", "Baker");
  //one_guy.printAge();
  int game_time = 0;
  while(1) {
    one_guy.timeEffects(1,game_time);
    for (int i=0;i<3;i++) {
      std::cout << *(one_guy.printStats() + i);
    }
    tick(5);
    game_time += 1;
  }
  return 0;
}

void tick(int t) {
  int time = clock();
  int timeB = time + t * 100000;
  while (clock() < timeB);
}
