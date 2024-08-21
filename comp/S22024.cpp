// #include "../comp.h"

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
 
int S22024(){

    int T, N;

    // Number of strings
    cin >> T >> N;

    vector<string> strings(N);

    for (int i = 0; i < T; i++){
        cin >> strings[i];
    }

    // Analyze strings and return an output
    for (int i = 0; i < T; i++){
        unordered_map<char, int> letterType = {};
        // Loop through the letters in the string
        for (int ii = 0; ii < strings[i].size(); ii++){
            letterType[strings[i][ii]] += 1;
            
        }
    }

    return 0;
}

int main1(){
    S22024();
    return 0;
}