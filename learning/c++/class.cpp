#include <iostream>
#include <string>

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

    int LNlength = arrayLength(lastNames, sizeof(lastNames));

    creation.lastName = lastNames[randomNumGen(LNlength)];

    cout << "\nRandom Num " << randomNumGen(LNlength);

    return 0;

}