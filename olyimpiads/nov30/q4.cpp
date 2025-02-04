#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

vector<vector<int>> adj(1001); 
vector<bool> vis(1001); 
int n;                        
int tot = 0;                   
int components = 0;    

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                adj[i].emplace_back(j);
                if (i < j) tot++; 
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            components++;
            dfs(i);
        }
    }
    cout << tot - (n - components) << '\n';
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif