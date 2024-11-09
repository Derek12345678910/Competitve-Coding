// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> adj;
vector<int> vis;
vector<int> xend;
vector<int> yend;

int bfs(int st, vector<int> &enddis){
    fill(enddis.begin(), enddis.end(), -1);
    queue<int> q;
    q.push(st); enddis[st] = 1;
    int n = 0;
    int fn = 0;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        if(enddis[cur] > n){
            n = enddis[cur];
            fn = cur;
        }
        for(int nxt : adj[cur]){
            if(enddis[nxt] == -1){
                q.push(nxt);
                enddis[nxt] = enddis[cur] + 1;
            }
        }
    }
    return fn;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    adj.resize(n+1);
    xend.resize(n+1);
    yend.resize(n+1);
    for(int i=0; i<n-1; i++){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }

    bfs(bfs(bfs(1, xend), xend), yend);

    for(int i=1; i<n+1; i++){
        cout << max(yend[i], xend[i]) << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif