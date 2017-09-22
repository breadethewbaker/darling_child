#include "person.h"

Person::Person(const char* f, const char* l) {
  _age = rand() % 120;
  _firstN = f;
  _lastN = l;
  _temperament = rand() % 16;
  _tiredness = 0; //out of 100
  _willingness = rand() % 100;
  _baseWillingness = rand() % 70;
  _mood = rand() % 1600;
}

//using namespace std;
void Person::printAge() {
  std::cout << _age;
}
void Person::timeEffects(int x) {
  _tiredness += x;
  
}
void Person::updateMood() {
  _mood = _tiredness * _temperament;
}
void Person::sleep(int t) {
  tiredness
}
void Person::reactEvent(int g,int b) {
  _tiredness += (2*g/3) + b
}
