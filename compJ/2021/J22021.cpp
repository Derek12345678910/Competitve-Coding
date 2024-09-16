// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    int n;
    cin >> n;

    vector<pair<string, int>> bids(n);

    for(int i=0; i<n; i++){
        cin >> bids[i].first >> bids[i].second;
    }
    int highest=0;
    int index=-1;
    for(int i=0; i<n; i++){
        if(bids[i].second > highest){
            highest = bids[i].second;
            index = i;
        }
    }

    cout << bids[index].first;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif