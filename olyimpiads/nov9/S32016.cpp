#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

vector<vector<int>> adj(100001);
vector<bool> vis(100001);
vector<bool> pho(100001);
int edges = 0;

void dfs(int node, int prev) {
    vis[node] = true;
    bool haspho = pho[node];
    for (int nxt : adj[node]) {
        if (nxt == prev) continue;
        if (!vis[nxt]) {
            dfs(nxt, node);
            if (vis[nxt]) {
                haspho = true;
            }
        }
    }
    vis[node] = haspho;
    if (haspho && prev != -1) edges++;
}

int bfs(int start, bool returnDist) {
    int farthestNode = 0, farthestDist = 0;
    queue<int> q;
    q.push(start);
    vector<int> dist(100001, -1);
    dist[start] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int nxt : adj[cur]) {
            if (dist[nxt] == -1 && vis[nxt]) {
                dist[nxt] = dist[cur] + 1;
                q.push(nxt);
                if (dist[nxt] > farthestDist) {
                    farthestDist = dist[nxt];
                    farthestNode = nxt;
                }
            }
        }
    }

    return returnDist ? farthestDist : farthestNode;
}

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, m; 
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x; 
        cin >> x;
        pho[x] = true;
    }

    for (int i = 0; i < n - 1; i++) {
        int x, y; 
        cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }

    dfs(pho[0] ? pho[0] : 1, -1);

    int diameter = bfs(bfs(pho[0] ? pho[0] : 1, false), true);

    cout << 2 * edges - diameter << endl;
    return 0;
}

int main1() {
    question();
    return 0;
}
#endif
