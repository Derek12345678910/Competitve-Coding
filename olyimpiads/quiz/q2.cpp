#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0
int n, x, m; 
vector<int> trees;

bool check(int mid){
    int amount = 0;
    for(int i=0; i<n; i++){
        if(trees[i] + mid >= x){
            amount ++ ;
        }
    }
    return amount >= m;
}

int question(){

    cin.sync_with_stdio(0); cin.tie(0);
    cin >> n >> x >> m;
    trees.resize(n);
    for(int i=0; i<n; i++){
        cin >> trees[i];
    }
    int l = 0, h = 100, ans;
    while(l <= h){
        int mid = floor((h + l)/2);
        if(check(mid)){
            h = mid - 1;
            ans = mid;
        } else {
            l = mid + 1;
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