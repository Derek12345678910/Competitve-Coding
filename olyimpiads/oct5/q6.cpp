// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> adj;

vector<bool> rabbits;

vector<int> dis;

vector<int> parent;

vector<int> path;

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int nodes, rab; cin >> nodes >> rab;
    // create adj list

    adj.resize(nodes+1);

    for(int i=0; i<nodes-1; i++){
        int x, y; cin >> x >> y;
        adj[y].emplace_back(x);
        adj[x].emplace_back(y);
    }

    rabbits.resize(nodes+1, false);

    for(int i=0; i<rab; i++){
        int x; cin >> x;
        rabbits[x] = true;
    }

    int st, ed; cin >> st >> ed;

    // find shortest path
    dis.resize(nodes+1, -1);
    parent.resize(nodes+1);

    queue<int> q;

    q.push(st);
    dis[st] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i=0; i<adj[cur].size(); i++){
            int newc = adj[cur][i];
            if(dis[newc] == -1){
                q.push(newc);
                dis[newc] = dis[cur] + 1;
                parent[newc] = cur;
            }
        }
    }

    int hold = ed;
    while(hold != st){
        path.emplace_back(hold);
        hold = parent[hold];
    }
    path.emplace_back(st);

    // then bfs from each point take shortest bunny path
    int shortest = 1000000;
    for(int n : path){
        fill(dis.begin(), dis.end(), -1);
        q.push(n);
        dis[n] = 0;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            if(rabbits[cur] == true){
                if(dis[cur] < shortest) shortest = dis[cur];
            }
            for(int i=0; i<adj[cur].size(); i++){
                int newc = adj[cur][i];
                if(dis[newc] == -1){
                    q.push(newc);
                    dis[newc] = dis[cur] + 1;
                }
            }
        }
    }

    cout << shortest;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif