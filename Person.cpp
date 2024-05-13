//
// Created by benya on 5/13/2024.
//

#include "Person.h"
#include <string>
#include <cstring>
#include <sstream>

Person::Person(const char *name) {
   _name = new char [strlen(name) + 1];
    strcpy(_name, name);
}
Person::Person(const Person &other) {
    //write a deep copy
    _name = new char[strlen(other._name) + 1];
    strcpy(_name, other._name);
}
Person::~Person() {
    delete _name;
}

const char *Person::GetName() const {
    return _name;
}