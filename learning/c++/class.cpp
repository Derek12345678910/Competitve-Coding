#include <iostream>
#include "functions.h"

using namespace std;

string lastNames = {};

class human {
    public: // access type
        int age;
        string firstName;
        string lastName;
        string powers;
};

int createHuman(string name){
    human creation; // make new object

    creation.firstName = name;

    

}