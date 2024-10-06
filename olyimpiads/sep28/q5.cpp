// #include '../comp.h

#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

#if 0

vector<vector<int>> adj;

vector<int> dis;

vector<int> visited;

void disperseants(){
    int size = dis.size();
    for(int i=0; i<size; i++){
        for(int j=0; j<adj[dis[i]].size(); j++){
            int cur = adj[dis[i]][j];
            if(visited[cur] != -2){
                visited[cur] = -2;
                dis.emplace_back(cur);
            }
        }
    }
}

int question(){

    int n, m; cin >> n >> m;

    visited.resize(n, -1);

    adj.resize(n);
    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        adj[x-1].emplace_back(y-1);
        adj[y-1].emplace_back(x-1);
    }

    int w; cin >> w;
    for(int i=0; i<w; i++){
        int x; cin >> x;
        dis.emplace_back(x-1);
        visited[x-1] = -2;
    }

    map<int, bool> times;

    queue<int> q;
    q.push(0);
    visited[0] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        
        if(visited[cur] % 4 == 0 && visited[cur] != 0 && times[visited[cur]] == false){
            times[visited[cur]] = true;
            disperseants();
        } 
        for(int i=0; i<adj[cur].size(); i++){
            int newnode = adj[cur][i];
            if(visited[newnode] == -1){
                q.push(newnode);
                visited[newnode] = visited[cur] + 1;
            }
        }
    }

    if(visited[n-1] < 0){
        cout << "sacrifice bobhob314";
    }
    else {
        cout << visited[n-1];
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif