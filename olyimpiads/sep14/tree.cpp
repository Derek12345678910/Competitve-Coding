// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){
    int count = 0;
    int list[4][4];
    for(int i=0; i<4; i++){
        for(int ii=0; ii<4; ii++){
            cin >> list[i][ii];
            if(list[i][ii] == 1){
                count++;
            }
        }
    }
    if(count != 6){
        cout << "No";
        return 0;
    }
    // row
    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (list[i][j] == 1) {
                found = true;
                break;
            }
        }
        if (!found){
            cout << "No";
            return 0;
        }
    }
    // col
    for (int j = 0; j < 4; ++j) {
        bool found = false;
        for (int i = 0; i < 4; ++i) {
            if (list[i][j] == 1) {
                found = true;
                break;
            }
        }
        if(!found){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif