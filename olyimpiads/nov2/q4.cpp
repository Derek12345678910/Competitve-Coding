// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int n, m; 

// directed adj
vector<vector<int>> adj;

vector<bool> reachable;

void dfs(int cur){
    reachable[cur] = true;
    for(int nxt : adj[cur]){
        if(!reachable[nxt]){
            dfs(nxt);
        }
    }
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    adj.resize(n+1);
    reachable.resize(n+1, false);
    vector<bool> fight(n+1, false);
    vector<int> ones;
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        adj[y].emplace_back(x);
        fight[x] = true;
        if(x == 1){
            ones.emplace_back(y);
        }
    }
    
    // run dfs from 1 to find all reachable points
    // if they have a fight then they can have a wand

    dfs(1);

    bool o = false;
    for(int i=0; i<ones.size(); i++){
        if(reachable[ones[i]] && fight[ones[i]]){
            o = true;
        }
    }
    if(adj[1].size() == 0) o = true;

    if(o) cout << 1;
    else cout << 0;

    for(int i=2; i<fight.size(); i++){
        if(reachable[i] && fight[i]){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif