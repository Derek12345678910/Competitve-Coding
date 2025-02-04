#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0); cin.tie(0);

    long long t; cin >> t;
    for(long long n=0; n<t; n++){
        long long N; cin>>N;
        vector<long long> height(N);
        vector<long long> growth(N);
        vector<long long> pref(N);
        for(long long i=0; i<N; i++) cin >> height[i];
        for(long long i=0; i<N; i++) cin >> growth[i];
        for(long long i=0; i<N; i++) cin >> pref[i];
        long long maxbound = 0;
        long long minbound = 0;

    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif