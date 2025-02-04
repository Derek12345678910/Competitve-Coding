#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

int n, t, k, v; 
bool check(int mid){

}

//binary search answer
int question(){

    cin.sync_with_stdio(0); cin.tie(0);

    cin >> n >> t >> k >> v;
    vector<bool> street(n, false);
    for(int i=0; i<v; i++){
        int x; cin >> x;
        street[x-1] = true;
    }

    int h = n, l = 0, ans;
    while(l <= h){
        int mid = floor((h+l)/2);
        if(check(mid)){
            h = mid - 1;
            ans = mid;
        } else {
            l = mid + 1;
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif