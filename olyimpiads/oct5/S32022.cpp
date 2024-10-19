// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

bool answer = false;

vector<int> ans;

vector<int> hold;

vector<int> cnt;

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, m, k; cin >> n >> m >> k;

    int max = (1 + m) * m / 2 + (n-m) * m;
    int min = n;

    ans.resize(n, 1);
    cnt.resize(n, 1);
    hold.resize(m+1, 0);

    k = k - n;

    if(k > max || k < min){
        answer = false;
        return 0;
    }
    hold[1] = 0;
    // initial
    for(int i=1; i<hold.size(); i++){
        if(k > 0){
            hold[i+1] = i;
            ans[i] = i+1;
            k -= i+1;
        }
    }

    answer = true;

    return 0;
}


int main1(){
    question();

    if(!answer){
        for(auto num : ans){
            cout << num << " ";
        }
    }
    else{
        cout << "-1";
    }
    
    return 0;
}
#endif