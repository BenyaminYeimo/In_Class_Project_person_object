//
// Created by benya on 5/13/2024.
//

#ifndef IN_CLASS_PROJECT_PERSON_OBJECT_PERSON_H
#define IN_CLASS_PROJECT_PERSON_OBJECT_PERSON_H


class Person {
public:
    Person (const char* name);
    ~Person();
    Person(const Person &other);//copy constructor for deep copy
    const char* GetName() const;
private:
    char* _name;
};


#endif //IN_CLASS_PROJECT_PERSON_OBJECT_PERSON_H
