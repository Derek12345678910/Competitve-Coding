// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<int> vis(101);
vector<int> d(101);
vector<vector<int>> adj(101);
int cycle = 0;

void dfs(int cur) {
    vis[cur] = 1;
    for(int nxt : adj[cur]){
        if(vis[nxt] == 1){
            // cycle
            cycle = d[cur] - d[nxt] + 1;
        }
        else if (vis[nxt] == 0){
            d[nxt] = d[cur] + 1;
            dfs(nxt);
        }
    }
    vis[cur] = 2;
}

vector<int> ans;

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 5; i++) {
        int t; cin >> t;
        fill(adj.begin(), adj.end(), vector<int>(0));
        fill(vis.begin(), vis.end(), 0);
        fill(d.begin(), d.end(), 1);
        cycle = 0;

        for(int j = 0; j < t; j++) {
            int x, y; cin >> x >> y;
            adj[x].emplace_back(y); 
        }

        dfs(1); 
        
        ans.emplace_back(cycle);

    }

    for(int i=0; i<5; i++){
        cout << ans[i] << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif