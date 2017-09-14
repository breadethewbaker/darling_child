// The superclass for all person entities in the game
#ifndef PERSON_H
#define PERSON_H

#include <stdlib.h>
#include <iostream>

class Person {

private:
  const char* _firstN;
  const char* _lastN;
  int _age;
  short _personality;  // myers-briggs maybe?

  int _willingness; // likelihood to follow command given by authority
  int _temperament; // mulitplier for mood changes
  int _mood[2]; // can affect willingness

public:
    Person(const char* f, const char* l);

    void printAge();
};

#endif
