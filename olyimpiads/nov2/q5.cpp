// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<long long> tutition;

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    long long n; cin >> n;

    for(int i=0; i<n; i++){
        long long x; cin >> x;
        tutition.emplace_back(x);
    }

    sort(tutition.begin(), tutition.end());

    long long sum = 0;
    long long index = 0;

    for(int i=0; i<n; i++){
        long long cur = tutition[i];
        long long rev = cur * (n-i);
        if(rev > sum){
            sum = rev;
            index = cur;
        }
    }

    cout << sum << " " << index;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif