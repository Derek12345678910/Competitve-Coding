#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0
vector<int> cow;
vector<int> t;
int n, m, k; 
bool check(int cur){
    vector<bool> c(cow.size(), false);
    cout << cur << endl;
    for(int i=0; i<t.size(); i++){
        int a = 0;
        for(int j=0; j<c.size(); j++){
            if(cur == a) break;
            if(c[j]-k <= t[i] && c[j] >= t[i] && c[j] == false){
                a++;
                c[j] = true;
            }
        }
    }
    bool finish = true;
    for(bool i : c){
        cout << i << " ";
        if(!i) finish = false;
    }
    cout << endl << finish << endl;
    return finish;
}
int question(){

    cin.sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    for(int i=0; i<n; i++) {int x; cin >> x; cow.emplace_back(x);} 
    for(int i=0; i<m; i++) {int x; cin >> x; t.emplace_back(x);}
    sort(cow.begin(), cow.end());
    sort(t.begin(), t.end());
    int l = 0, h = cow.size();
    int ans;
    while(l <= h){
        int mid = (l+h)/2;
        if(check(mid)){ ans = mid; h = mid-1;} 
        else { l = mid+1;}
    }
    cout << ans;
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif