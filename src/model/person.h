// The superclass for all person entities in the game
#ifndef PERSON_H
#define PERSON_H

#include <iostream> // cout cin
#include <stdlib.h> // rand
#include <time.h> // clock_t clock

class Person {

private: // Non-derivative stat variables labeled DIRECT
  const char* _firstN;
  const char* _lastN;
  int _age;

  int _willingness; // likelihood to follow command given by authority

  int _mood; // can affect willingness
  int _baseWillingness; // added to willingness, varies by individual

  int _tiredness; // DIRECT :can affect mood
  int _temperament; // multiplier for mood changes

public:
  Person(const char* f, const char* l);

  void printAge();

  void updateStats();

  void reactEvent(int goodPts, int badPts);

  void timeEffects(int x);

  void sleep(unsigned int t);
};

#endif
