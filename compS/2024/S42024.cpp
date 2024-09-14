// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

vector<bool> visited;
string colour;
vector<vector<pair<int, int>>> adj;

int N, M;

void dfs(int node, int state){
    for(auto& j : adj[node]){
        int connect = j.first;
        int index = j.second;
        if (visited[connect])
            continue;
        visited[connect] = true;
        if(colour[index] == 'G'){
            colour[index] = (state == 0) ? 'R' : 'B';
        }
        dfs(connect, state ^ 1);
    }
    
}

int S42024(){

    cin >> N >> M;

    //  create adjacency list
    adj.resize(N);
    visited.resize(N, false);
    colour.resize(M, 'G');

    int u, v;
    for(int i=0; i<M; i++){
        cin >> u >> v;
        adj[u-1].emplace_back(v-1, i);
        adj[v-1].emplace_back(u-1, i);
    }
    
    for(int i = 0; i<N; i++){
        if(!visited[i]){
            visited[i] = true;
            dfs(i, 0);
        }
    }
    
    cout << colour << endl;

    return 0;
}

int main1()
{
    S42024();
    return 0;
}
#endif

/*
5 7
1 2
2 4
5 2
4 5
4 3
1 3
1 4
*/