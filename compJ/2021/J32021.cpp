// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    vector<string>inputs(0);
    int inputting = 0;
    while(inputting != -1){
        inputting++;
        inputs.resize(inputting);
        cin >> inputs[inputting-1];
        if(inputs[inputting-1] == "99999"){
            inputting = -1;
        }
    }
    string previous;
    for(string& nums : inputs){
        if(nums == "99999"){
            break;
        }
        string direction = "";
        int num1 = stoi(nums.substr(0, 1));
        int num2 = stoi(nums.substr(1, 1));
        if((num1 + num2) == 0){
            direction = previous;
        }
        else if((num1 + num2) % 2 == 1){
            direction = "left";
            previous = direction;
        } 
        else if((num1 + num2) % 2 == 0) {
            direction = "right";
            previous = direction;
        }
        cout << direction << " " << nums.substr(2, 4) << "\n";
    }   

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif