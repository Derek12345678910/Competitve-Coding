// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int findHighest(int notInclude, vector<int>& array){
    int highest = 0;
    for(int i = 0; i < array.size(); i++){
        if(array[i] > highest && array[i] < notInclude){
            highest = array[i];
        }
    }
    return highest;
}

int question(){

    int N;

    cin >>N;

    vector<int> scores(N);

    for(int i=0; i<N; i++){
        cin >> scores[i];
    }

    int g, s, b;    
    g = findHighest(100, scores);
    s = findHighest(g, scores);
    b = findHighest(s, scores);

    int count = 0;

    for(int i =0; i<N; i++){
        if(scores[i] == b){
            count++;
        }
    }

    cout << b << " " << count << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif