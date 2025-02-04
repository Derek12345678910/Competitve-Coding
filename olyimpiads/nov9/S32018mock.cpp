#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> adj(51);

vector<pair<int, int>> edges;

bool bfs(int ed, int x, int y){
    queue<int> q;
    vector<bool> vis(51, false);
    q.push(1); vis[1] = true;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        if(cur == ed){
            return true;
        }
        for(int nxt : adj[cur]){
            bool deleted = (cur == x && nxt == y) ? true : false;
            if(!vis[nxt] && !deleted){
                q.push(nxt);
                vis[nxt] = true;
            }
        }
    }
    return false;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        edges.emplace_back(x, y);
    }

    for(int i=0; i<m; i++){
        int x = edges[i].first; 
        int y = edges[i].second;
        if(bfs(n, x, y)){
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif