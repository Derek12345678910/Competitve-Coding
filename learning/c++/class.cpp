#include <iostream>
#include "functions.h"

using namespace std;

string lastNames[] = {"Lau", "Roli", "Dexter"};

class human
{
    public: // access type
        int age;
        string firstName;
        string lastName;
        string powers;
};

int createHuman(string name)
{
    human creation; // make new object

    creation.firstName = name;

    cout << randomNumGen(arrayLength(lastNames));

    return 0;

}