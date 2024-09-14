// #include '../comp.h

#include <iostream>
#include <map>

using namespace std;

#if 0

int question(){

    string pressed, displayed;

    cin >> pressed >> displayed;

    map<char, int> wrong;

    char silly = '-';
    char result = '-';
    char quiet = '-'; 

    for(int i=0; i<displayed.size(); i++){
        auto itr = find(pressed.begin(), pressed.end(), displayed[i]);
        if(itr == pressed.end()){
            result = displayed[i];
        }
    }

    int amount = 0;

    for(int i=0; i<displayed.size(); i++){
        if(displayed[i] == result){
            silly = pressed[i+amount];
            break;
        }
        else if(pressed[i] != displayed[i]){
            amount++;
        }
    }

    for(int i=0; i<pressed.size(); i++){
        auto itr = find(displayed.begin(), displayed.end(), pressed[i]);
        if(itr == displayed.end() && pressed[i] != silly){
            quiet = pressed[i];
            break;
        }
    }
    // fortsrloops
    // frtzrlpz
    cout << silly << " " << result << "\n" << quiet << endl;
    
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif