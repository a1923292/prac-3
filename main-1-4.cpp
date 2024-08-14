#include <iostream>
#include "person.h"

using namespace std;
extern PersonList shallowCopyPersonList(PersonList pl);

int main(void){

    PersonList pl;
    pl.numPeople = 4;
    pl.people = new Person[pl.numPeople];
    for (int i=0; i < pl.numPeople; i++){
        pl.people[i].age = 5;
        pl.people[i].name = "bob";
    }
    PersonList result = shallowCopyPersonList(pl);
    cout << "new-" << result.people << " old-" << pl.people << endl;
    if (result.people == pl.people){
        cout << "successful shallow copy" << endl;
    } else {
        cout << "unsuccessful shallow copy" << endl;
    }
    for (int i = 0; i < pl.numPeople; i++){
        cout << "person "<< i+1 << " name: " << result.people[i].name << endl;
        cout << "person "<< i+1 << " age: " << result.people[i].age << endl;
    }

    delete[] pl.people;

    return 0;
}
