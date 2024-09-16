// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    string input; cin >> input;
    input += 'n';

    int startof = 0;
    int endof = 0;
    string type = " ";
    bool digit = false;
    int startdigit = 0;
    for(int i=0; i<input.size(); i++){
        if(input[i] == '+'){
            type = "tighten";
            endof = i;
        } 
        else if (input[i] == '-'){
            type = "loosen";
            endof = i;
        }
        if(isdigit(input[i])){
            if(digit == false){
                startdigit = i;
                digit = true;
            }
        }
        else if(digit == true){
            digit = false;
            cout << input.substr(startof, endof - startof) << " " << type << " " << input.substr(startdigit, i-startdigit) << "\n";
            startof = i;
            i--;
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif