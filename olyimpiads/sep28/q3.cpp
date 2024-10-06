// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

vector<vector<int>> adj;

vector<int> starts;

vector<int> visited;

int question(){

    int n, m; cin >> n >> m;

    adj.resize(n);

    visited.resize(n, -1);

    for(int i=0; i<m; i++){
        int v, b; cin >> v >> b;
        adj[v-1].emplace_back(b-1);
        adj[b-1].emplace_back(v-1);
    }

    int k; cin >> k;
    starts.resize(k);
    for (int i = 0; i < k; i++) {
        int o; cin >> o;
        starts[i] = o - 1;
    }

    queue<int> q;
    for(int i=0; i<starts.size(); i++){
        q.push(starts[i]);
        visited[starts[i]] = 0;
    }
    int highest = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i=0; i<adj[cur].size(); i++){
            if(visited[adj[cur][i]] == -1){
                visited[adj[cur][i]] = visited[cur] + 1;
                q.push(adj[cur][i]);
                if(highest < visited[adj[cur][i]]){
                    highest = visited[adj[cur][i]];
                }
            }
        }
    }

    cout << highest;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif