#include "person.h"

Person::Person(const char* f, const char* l) {
    _age = rand() % 120;
    _firstN = f;
    _lastN = l;
    _temperament = rand() % 10;
    _willingness = rand() % 100;
}

//using namespace std;
void Person::printAge() {
        std::cout << _age;
}
