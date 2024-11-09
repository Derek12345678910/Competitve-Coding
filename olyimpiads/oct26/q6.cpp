// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> adj(1e5);
vector<int> dis(1e5, -1);

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for(int i=0; i<n-1; i++){
        int x, y;
        cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }

    queue<int> q;
    int farthest = 0;
    int fn = 0;
    q.push(1);
    dis[1] = 0;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int nxt : adj[cur]){
            if(dis[nxt] == -1){
                q.push(nxt); 
                dis[nxt] = dis[cur] + 1;
                farthest = dis[nxt]; fn = nxt;
            }
        }
    }    
    fill(dis.begin(), dis.end(), -1);
    q.push(fn);
    dis[fn] = 0;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int nxt : adj[cur]){
            if(dis[nxt] == -1){
                q.push(nxt); 
                dis[nxt] = dis[cur] + 1;
                farthest = dis[nxt]; fn = nxt;
            }
        }
    }    

    cout << farthest;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif