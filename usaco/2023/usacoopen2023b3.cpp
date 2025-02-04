#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>

using namespace std;

#if 0

// idea 
// the distance between movements tells how many times the time/dis the numbers around it moves a distance
// so in the segment 1, 2, 3, 4, 5, 6
// if pos are 0, 2, 4 and u move 4s
// 1 will move 2 times with a dis of 2 times each time
// and ones between will move same amount but if odd it will move 1 less
vector<long long> pos;
int question(){

    cin.sync_with_stdio(0); cin.tie(0);

    long long n, k, t; cin >> n >> k >> t;
    vector<long long> ans(n);
    for(int i=0; i<n; i++) ans[i] = i;
    for(long long i=0; i<k; i++){
        long long x; cin >> x;
        pos.emplace_back(x);
    }
    for(long long i=0; i<k; i++){
        long long j = (i == k-1) ? 0 : i+1;
        int right = pos[i], dis=0;
        while(true){
            if(right == pos[j]) break;
            right = (right==n-1) ? 0 : right=right+1;
            dis++;
        }
        long long o=pos[i];
        long long count = 0;
        while(true){
            if(count == t) break;
            if(o == pos[j]) break;
            long long v = ceil(double(t-count)/dis);
            //cout << o << " " << (v*dis+o)%n << endl;
            ans[(v*dis+o)%n] = o;
            o = (o==n-1) ? 0 : o=o+1;
            count ++;
        }
    }
    for(long long i=0; i<ans.size(); i++) cout << ans[i] << " ";
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif