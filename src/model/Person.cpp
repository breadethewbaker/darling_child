#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include "person.h"

Person::Person(const char* f, const char* l) {
    _age = rand() % 120;
    _firstN = f;
    _lastN = l;
    _personality = rand() % 16;
    _temperament = rand() % 10;
    _willingness = rand() % 100;
}

using namespace std;
void Person::printAge() {
        cout << _age;
}
