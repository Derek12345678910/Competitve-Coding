// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int students;

vector<vector<int>> adj(10000);

vector<int> vis(10000);

vector<int> dis(10000);

vector<pair<int, int>> group;

void dfs(int cur){
    vis[cur] = 1;
    for(int nxt : adj[cur]){
        if(vis[nxt] == 1){
            // cycle
        }
        else if(vis[nxt] == 0){
            dis[nxt] = dis[cur] + 1;
            dfs(nxt);
        }
    }
    vis[cur] = 2;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> students;
    for(int i=0; i<students; i++){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
    }

    bool input = true;
    while(input){
        int x, y; cin >> x >> y;
        if(x == 0 && y == 0){
            input = false;
            break;
        }
        group.emplace_back(x,y);
    }

    for(int i=0; i<group.size(); i++){
        fill(vis.begin(), vis.end(), 0);
        fill(dis.begin(), dis.end(), 0);
        dfs(group[i].first);
        if(dis[group[i].second] == 0){
            cout << "No" << "\n";
        }
        else {
            cout << "Yes " << dis[group[i].second]-1 << "\n";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif