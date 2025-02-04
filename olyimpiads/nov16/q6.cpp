#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0
long long p, y, t;
bool check(long long num){
    long long balance = 0;
    for (int i = 0; i < y; i++) {
        balance += num;
        balance = (balance * (100 + p) / 100); 
        if (balance >= t) return true; 
    }
    return false;
}
int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> p >> y >> t;
    long long l = 1, r = t/y;
    long long ans = t;
    while(l <= r){
        long long mid = ((l + r)/2);
        if(check(mid)){
            ans = mid;
            r = mid-1;
        }else {
            l = mid+1;
        }
    }
    cout << ans;
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif