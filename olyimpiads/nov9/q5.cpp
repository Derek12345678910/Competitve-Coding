#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<long long> cows;

vector<long long> action;

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    long long totalmilk = 0;

    long long n, m; cin >> n >> m;
    string a; cin >> a;
    for(int i=0; i<n; i++){
        action.emplace_back(a[i]);
    }
    for(int i=0; i<n; i++){
        int x; cin >> x;
        cows.emplace_back(x);
        totalmilk += x;
    }

    long long lost = 0;
    vector<bool> losing(n, false);
    vector<long long> sub(n);
    for(int i=0; i<n; i++){
        // bounds
        bool l = false;
        if(action[i] == 'R'){
            int k = (i+1 == n) ? 0 : i+1;
            if(action[k] == 'L') l = true;
        }
        if(action[i] == 'L'){
            int k = (i-1 == -1) ? n-1 : i-1;
            if(action[k] == 'R') l = true;
        }
        //
        if(l) {
            losing[i] = true;
            int dir = (action[i] == 'R') ? -1 : 1;
            int u = i;
            while(true){
                int f = u + dir;
                if(f == -1) f = n-1;
                else if(f == n) f = 0; 
                if(action[f] == action[i]){
                    sub[i] += cows[f];
                    u = f;
                }
                else{
                    break;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        if(losing[i]){
            if(sub[i] > m){
                lost += m;
            }
            else if(sub[i] <= m){
                lost += sub[i];
            }
        }
    }
    cout << totalmilk-lost;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif