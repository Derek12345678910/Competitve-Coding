// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

vector<vector<int>> adjlist;
vector<bool> visited;

string found = "NO SHAHIR!";
int target = 0;

int bfs(int node){
    queue <int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty()) {
        int curr = q.front();
        if(curr == target){
            found = "GO SHAHIR!";
            break; 
        }
        q.pop();

        for (int x : adjlist[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
    return 0;
}

int question(){

    int n, m, a; cin >> n >> m >> a >> target;
    target = target -1;
    visited.resize(n, false);
    adjlist.resize(n);

    for(int i=0; i<m; i++){
        int u, v; cin >> u >> v;
        adjlist[u-1].emplace_back(v-1);
        adjlist[v-1].emplace_back(u-1);
    }

    bfs(a-1);

    cout << found << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif