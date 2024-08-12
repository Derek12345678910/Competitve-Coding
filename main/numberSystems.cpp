#include <iostream>
#include <string>

#include "functions.h"

using namespace std;

int randomNumGen(int max)
{ // create new num
    // Providing a seed value
	srand((unsigned) time(NULL));
		
    int random = 1 + (rand() % max);

	return random;
}

int arrayLength(string arrayreturn[], int sizeofArray)
{ // return array length
    int length = sizeofArray / sizeof(arrayreturn[0]);
    cout << "\nLength: " << length;
    return length;
}
