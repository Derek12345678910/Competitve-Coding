// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >>n;
    vector<int> tides(n);
    for(int i=0; i<n; i++){
        cin >> tides[i];
    }

    sort(tides.begin(), tides.end());

    int odd = (n%2==1) ? 1 : 0;
    vector<int> low(n/2 + odd);
    vector<int> high(n/2);
    int o=0;
    for(int i=n/2+odd-1; i>=0; i--){
        low[o] = tides[i];
        o++;
    }
    o=0;
    for(int i=n/2+odd; i<n; i++){
        high[o] = tides[i];
        o++;
    }
    bool s = false;
    int j = 0;
    for(int i=0; i<n; i++){
        if(!s){
            s = true;
            cout << low[j] << " ";
        }
        else if(s){
            s = false;
            cout << high[j] << " ";
            j++;
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif