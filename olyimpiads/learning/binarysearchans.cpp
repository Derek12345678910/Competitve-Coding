#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

long long n, subs;

vector<long long> nums;
long long ans;

bool check(long long num){
    long long cur = 0;
    long long s = 1;
    for(int i=0; i<n; i++){
        cur += nums[i];
        if(cur > num){
            cur = nums[i];
            s ++ ;
        }
    }
    if(s <= subs) return true;
    else return false;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);
    long long l = 0, h = 0;
    cin >> n >> subs;
    for(long long i=0; i<n; i++){
        long long x; cin >> x;
        nums.emplace_back(x);
        if(l < x) l = x;
        h += x;
    }
    while(l <= h){
        long long mid = floor((l + h)/2);
        if(check(mid)){
            ans = mid;
            h = mid-1;
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