#ifndef PERSON_H
#define PERSON_H

#include <stdlib.h>
#include <iostream>

class Person {

  char _firstN [10], _lastN [10];
  int _age;
  short _personality;  // myers-briggs maybe?

  int _willingness; // likelihood to follow command given by authority
  int _temperament; // mulitplier for mood changes
  int[] _mood;

  Person (char f[], char l[]);

  Public:
    void printAge();
}

#endif
