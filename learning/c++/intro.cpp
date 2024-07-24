#include <iostream>
using namespace std;

// rm * - clear directions
// cd - change directions
// pwd - show file location

int myNum = 0;
int maxNum = 10;

int main(){

    for (int i =  0; i < maxNum; i++ ){
        myNum = i * i;
        cout << myNum;
        cout << "\n";
    }
    return 0; // used to end a function
}