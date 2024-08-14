#include <iostream>
#include "person.h"

using namespace std;
extern Person* createPersonArray(int n);

int main(void){

    int num = 7;
    Person* result = createPersonArray(num);

    for (int i = 0; i < num; i++){
        cout << "person "<< i+1 << " name: " << result[i].name << endl;
        cout << "person "<< i+1 << " age: " << result[i].age << endl;
    }

    return 0;
}
