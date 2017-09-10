// The superclass for all person entities in the game
#include <stdlib.h>
#include <iostream>

class Person() {

  string fName, lName;
  int age;
  short personality;  // myers-briggs maybe?

  int willingness; // likelihood to follow command given by authority
  int temperament; // mulitplier for mood changes
  int[] mood;

  Person () {
    age = rand() % 120;
    int printAge() {
      std.out(age);
    }
  }
}
