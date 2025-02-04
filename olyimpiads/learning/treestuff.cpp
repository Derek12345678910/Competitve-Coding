#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int radius() {
    int node1 = bfs(1, false);
    int node2 = bfs(node1, false);

    vector<int> distFromNode1(adj.size(), -1);
    queue<int> q;
    distFromNode1[node1] = 0;
    q.push(node1);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto [nxt, dis] : adj[cur]) {
            if (distFromNode1[nxt] == -1) {
                distFromNode1[nxt] = distFromNode1[cur] + dis;
                q.push(nxt);
            }
        }
    }

    vector<int> distFromNode2(adj.size(), -1);
    distFromNode2[node2] = 0;
    q.push(node2);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto [nxt, dis] : adj[cur]) {
            if (distFromNode2[nxt] == -1) {
                distFromNode2[nxt] = distFromNode2[cur] + dis;
                q.push(nxt);
            }
        }
    }

    int radius = INT_MAX;
    for (int i = 1; i < adj.size(); ++i) {
        if (distFromNode1[i] != -1 && distFromNode2[i] != -1) {
            int maxDist = max(distFromNode1[i], distFromNode2[i]);
            radius = min(radius, maxDist);
        }
    }

    return radius;
}

vector<vector<pair<int, int>>> adj;

int bfs(int st, bool node){
    int far = 0, fn = 0;
    queue<int> q;
    q.push(st);
    vector<int> vis(adj.size(), -1);
    vis[st] = 0;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(auto [nxt, dis] : adj[cur]){
            if(vis[nxt] == -1){
                vis[nxt] = vis[cur] + dis;
                q.push(nxt);
                if(far < vis[nxt]){
                    far = vis[nxt];
                    fn = nxt;
                }
            }
        }
    }
    if(!node) return fn;
    return far;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif