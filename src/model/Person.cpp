#include "person.h"

Person::Person(const char* f, const char* l) : _firstN(f), _lastN(l) {
  _age = rand() % 120;
  _temperament = rand() % 16;
  _tiredness = 0; //out of 100
  _baseWillingness = rand() % 70;
  _willingness = rand() % (100 - _baseWillingness);
  _mood = rand() % 1600;
}

void Person::printAge() {
  std::cout << _age << "\n";
}
void Person::timeEffects(int t) {
  if (_tiredness > 120) {
    //insert rampage here
    std::cout << "rampaging";
    int x;
    std::cin >> x;
    this->sleep(12);
  } else if (_tiredness < 100) {
    _tiredness += t;
  } else {
    this->sleep(t/5);
  }
  this->updateStats();
}
void Person::sleep(unsigned int t) {
  if (_tiredness - (t * 10) > 0) {
    _tiredness -= t * 10;
  } else { _tiredness = 0; }
  _willingness = rand() % (100 - _baseWillingness);
  int goal = t + clock();
  while (goal > clock());
}
void Person::reactEvent(int g,int b) {
  _tiredness += (2*g/3) + b;
}
void Person::updateStats() {
  _willingness -= _mood / 25;
  _mood = _tiredness * _temperament;
  if (_mood > 1600) { _mood = 1600; }
}
void Person::printStats() {
  std::cout << _tiredness << "\n" << _willingness << "\n" << _mood;
}
