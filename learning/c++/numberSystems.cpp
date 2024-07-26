#include <iostream>
#include "functions.h"

using namespace std;

int randomNumGen(int max)
{ // create new num
    // Providing a seed value
	srand((unsigned) time(NULL));
		
    int random = 1 + (rand() % max);

	return random;
}

int arrayLength(string array)
{ // return array length
    int length = sizeof(array) / sizeof(array[0]);
    return length;
}
