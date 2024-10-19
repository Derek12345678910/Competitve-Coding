// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <iomanip> 

using namespace std;

#if 0

vector<pair<double, double>> times;

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    cout.precision(6);
    cout.setf(ios::fixed);


    int x; cin >> x;
    times.resize(x);
    for(int i=0; i<x; i++){
        cin >> times[i].first >> times[i].second;
    }

    sort(times.begin(), times.end());

    double highest = 0.0;

    for(int i=0; i<x-1; i++){
        double time = abs(times[i+1].second - times[i].second) / static_cast<double>(times[i+1].first - times[i].first);
        if(highest < time) highest = time;
    }

    cout << highest;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif