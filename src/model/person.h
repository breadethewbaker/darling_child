// The superclass for all person entities in the game
#ifndef PERSON_H
#define PERSON_H

#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Person {

private:
  const char* _firstN;
  const char* _lastN;
  int _age;

  int _willingness; // likelihood to follow command given by authority

  int _mood[2]; // can affect willingness
  int _baseWillingness; // added to willingness, varies by individual

  int _tiredness; // can affect mood
  int _temperament; // mulitplier for mood changes

public:
    Person(const char* f, const char* l);

    void printAge();

    void affectMood(int goodPts, int badPts);

    void sleep();
};

#endif
