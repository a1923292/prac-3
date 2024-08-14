#include "person.h"

PersonList deepCopyPersonList(PersonList pl){
    PersonList newPl;
    newPl.numPeople = pl.numPeople;
    newPl.people = new Person[pl.numPeople];
    for (int i=0; i < pl.numPeople; i++){
        newPl.people[i].age = pl.people[i].age;
        newPl.people[i].name = pl.people[i].name;
    }
    return newPl;
}