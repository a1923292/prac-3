#include "Person.h"

PersonList createPersonList(int n){
    PersonList people;
    people.numPeople = n;
    people.people = new Person[people.numPeople];
    for (int i = 0; i < n; i++){
        people.people[i].age = 1;
        people.people[i].name = "Jane Doe";
    }
    return people;
}
