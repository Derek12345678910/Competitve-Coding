// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int createNum(int a, int b, int c){
    int created = 0;
    // create numbers
    for(int i = 0; i < 3; i++){
        if(i == 0){
            created = (created + a) * 10;
        }
        else if(i == 1){
            created = (created + b) * 10;
        }
        else {
            created = created + c;
        }
    }
    return created;
}

int steps = 1;

int checkSteps(int startNum){

    int d1, d2, d3;
    // get all digits
    for(int i = 0; i < 3; i++){
        int digit = startNum % 10; 
        if(i == 0){
            d1 = digit;
        } else if(i == 1){
            d2 = digit;
        } else {
            d3 = digit;
        }
        startNum = (startNum - digit) / 10;
    }

    int highest = d1;
    int middle;
    int lowest;

    if(d1 == d2 && d2 == d3){
        // all same
        return -1;
    }

    // compare d2 to d1
    if(highest < d2){
        middle  = highest;
        highest = d2;
    } else {
        middle = d2;
    }
    if(middle < d3){
        lowest = middle;
        middle = d3;
        if(highest < middle){
            middle = highest;
            highest = d3;
        }
    } else {
        lowest = d3;
    }
    
    int highestNum = createNum(highest, middle, lowest);
    int lowestNum = createNum(lowest, middle, highest);
    int finalNum = highestNum - lowestNum;
    if(finalNum != 495){
        // if less than 100
        if(finalNum < 100){
            finalNum = finalNum * 10 + 0;
        }
        steps++;
        checkSteps(finalNum);
    }
    else if (finalNum == 495){
        return 0;
    }
}

int question(){

    int startNum;
    cin >> startNum;

    if(checkSteps(startNum) == -1){
        cout << NULL << endl;
    }else {
        cout << steps << endl;
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif