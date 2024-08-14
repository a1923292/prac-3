#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main(void){

    int num = 5;
    PersonList result = createPersonList(num);

    cout << result.numPeople << endl;
    for (int i = 0; i < num; i++){
        cout << "person "<< i+1 << " name: " << result.people[i].name << endl;
        cout << "person "<< i+1 << " age: " << result.people[i].age << endl;
    }

    return 0;
}
