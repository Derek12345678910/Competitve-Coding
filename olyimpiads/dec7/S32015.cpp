#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

set<int> s;
int ans = 0;
int question(){

    cin.sync_with_stdio(0); cin.tie(0);
    int g, p; cin >> g >> p;
    for(int i=1; i<g+1; i++){
        s.insert(i);
    }
    for(int i=0; i<p; i++){
        int x; cin >> x;
        auto it = s.upper_bound(x);
        if(it != s.begin()){
            it --; s.erase(it);
            ans++;
        } else break;
    }
    cout << ans;
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif