// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

int c;

vector<int>row1;
vector<int>row2;

int answer = 0;

int S12023(){

    cin >> c;

    row1.resize(c);
    row2.resize(c);

    for(int i=0; i<c; i++){
        cin >> row1[i];
    }
    for(int i=0; i<c; i++){
        cin >> row2[i];
    }

    // even ones can merge non even cannot merge with bottom
    for(int i=0; i<c; i++){
        // is even rows can merge
        if(row1[i] == 1){
            answer += 3;
        }
        if(row2[i] == 1){
            answer += 3;
        }
        // is even can merge
        if(row2[i] == 1 && row1[i] == 1 && i%2 == 0){
            answer -= 2;
        }
        // if theres a triangle behind it can merge so subtract one
        if(i != 0){
            if(row1[i-1] == 1 && row1[i]==1){
                answer -=2;
            }
            if(row2[i-1] == 1 && row2[i]==1){
                answer -=2;
            }
        }
    }

    cout << answer << endl;

    return 0;
}

#if 1
int main1(){
    S12023();
    return 0;
}
#endif