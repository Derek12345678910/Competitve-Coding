// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int hor = 0;
int ver = 0;

char matrix[4][4];

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    string input; cin >> input;
    for(int i=0; i<input.size(); i++){
        if(input[i] == 'H'){
            hor++;
        }
        else {
            ver++;
        }
    }

    if(hor%2 == 1){
        if(ver%2 == 1){
            cout << 4 << " " << 3 << "\n";
            cout << 2 << " " << 1 << "\n";
        }
        else {
            cout << 3 << " " << 4 << "\n";
            cout << 1 << " " << 2 << "\n";
        }
    }
    else {
        if(ver%2 == 1){
            cout << 2 << " " << 1 << "\n";
            cout << 4 << " " << 3 << "\n";
        }
        else {
            cout << 1 << " " << 2 << "\n";
            cout << 3 << " " << 4 << "\n"; 
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif