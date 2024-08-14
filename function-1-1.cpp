#include "person.h"

Person* createPersonArray(int n) {
    Person* people_array = new Person[n];
    for (int i = 0; i < n; i++){
        Person personNew;
        personNew.name = "John Doe";
        personNew.age = 0;
        people_array[i] = personNew;
    }
    return people_array;
}