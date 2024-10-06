// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> adj;

int n, m; 

bool bfs(int st, int ed){
    vector<bool> vis(n+1, false);
    queue<int> q;
    q.push(st); 
    vis[st] = true;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int next : adj[cur]){
            if(!vis[next]){
                q.push(next); vis[next] = true;
            }
        }
    }
    return vis[ed];
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    adj.resize(n+1);

    for(int i=0; i<m; i++){ // one way
        int p, q; cin >> p >> q;
        adj[p].emplace_back(q);
    }

    int x, y; cin >> x >> y;
    
    if(bfs(x, y)) cout << "yes";
    else if(bfs(y, x)) cout << "no";
    else cout << "unknown";

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif