// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<pair<int, int>>> adj(100001);

int diameter = 0;

int bfs(int node){
    vector<int> vis(100001, -1);
    queue<int> q;
    int far = 0;
    q.push(node);
    vis[node] = 0;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(auto [curx, cury] : adj[cur]){
            if(vis[curx] == -1){
                q.push(curx); 
                vis[curx] = vis[cur] + cury;
                if(vis[curx] > vis[far]) far = curx;
            }
        }
    }
    return vis[far];
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int total = 0;

    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x, y, c; cin >> x >> y >> c;
        adj[x].emplace_back(y,c);
        adj[y].emplace_back(x,c);
        total += c;
    }

    // find diameter
    // find the amount of distance in the diameter
    // mutiply everything by 2
    diameter = bfs(0);
    
    cout << (total*2) - diameter ;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif