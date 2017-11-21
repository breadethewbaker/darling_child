#include "person.h"

Person::Person(const char* f, const char* l) : _firstN(f), _lastN(l) {
  _age = rand() % 120;
  _temperament = rand() % 16;
  _tiredness = 0; //out of 100
  _baseWillingness = rand() % 70;
  _willingness = rand() % (100 - _baseWillingness);
  _mood = rand() % 1600;
  _asleep[0] = 0;
}

void Person::printAge() {
  std::cout << _age << "\n";
}
void Person::timeEffects(unsigned int d, unsigned int t) {
  if (_asleep[0] == 0) {
    if (_tiredness > 120) {
      //insert rampage here
      std::cout << "rampaging";
      int x;
      std::cin >> x;
      this->sleep(12, t);
    } else if (_tiredness < 100) {
      _tiredness += d;
    } else {
      this->sleep(d/5, t);
    }
    this->updateStats();
  } else { this->sleep(d,t); }
}

// awakens or puts to sleep Person and updates stats
void Person::sleep(unsigned int d, unsigned int t) {
  if (_asleep[0] == 0) {
    if (_tiredness - (d * 10) > 0) {
      _tiredness -= d * 10;
    } else {
      _tiredness = 0;
      _asleep[0] = 1;
      _asleep[1] = t+d;
    }
  } else if (t >= _asleep[1]){
    _asleep[0] = 0;
  }
  _willingness = rand() % (100 - _baseWillingness);
}
void Person::reactEvent(int g,int b) {
  _asleep[0] = _asleep[0] == 1 ? 0:0;
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
