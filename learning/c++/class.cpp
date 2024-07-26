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

    int length = arrayLength(lastNames, sizeof(lastNames));

    cout << "\nRandom Num " << randomNumGen(length);

    return 0;

}