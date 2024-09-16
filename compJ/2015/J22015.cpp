// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    string input; getline(cin, input);

    int happy = 0, sad = 0;

    int pos = input.find(":-)");
    while (pos != string::npos) {
        happy++;
        pos = input.find(":-)", pos + 3); // Move past the found emoticon
    }

    // Find occurrences of ":-("
    pos = input.find(":-(");
    while (pos != string::npos) {
        sad++;
        pos = input.find(":-(", pos + 3);
    }
    string output;
    if(sad == 0 && happy == 0){
        output = "none";
    }
    else if(sad == happy){
        output = "unsure";
    }
    else if(sad > happy){
        output = "sad";
    }
    else if(happy > sad){
        output = "happy";
    }

    cout << output;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif