#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> adj(100001);
vector<vector<int>> adj2(100001);
vector<pair<int, int>> vis(100001);
void dfs(int cur, int pre){
    for(int nxt : adj[cur]){
        if(nxt != pre){
            dfs(nxt, cur);
            if(pre != -1){
                adj2[pre].emplace_back(nxt);
                adj2[nxt].emplace_back(pre);
            }
        }
    }
}
void dfs2(int cur, int pre){
    for(int nxt : adj2[cur]){
        if(nxt != pre){
            vis.emplace_back(cur, nxt); dfs2(nxt, cur);
        }
    }
}
void printing(int cur){
    vis.clear(); dfs2(cur, -1);
    cout << vis.size() + 1 << "\n";
    for(auto [cur, pre] : vis) cout << cur << " " << pre << "\n";
}
int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for(int i=0; i<n-1; i++){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y); adj[y].emplace_back(x);
    }
    dfs(1, -1);
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (!adj2[i].empty()) {
            k++;
        }
    }
    cout << k << "\n";
    printing(1);
    for(int i=0; i<adj2.size(); i++){
        if(!adj2[i].empty())printing(i);
    }
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif