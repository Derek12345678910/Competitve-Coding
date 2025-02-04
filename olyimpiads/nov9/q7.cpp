#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<pair<int, int>>> adj;

int bfs(int start, bool returnDist) {
    int farthestDist = 0, farthestNode = 0;
    queue<int> q;
    q.push(start);
    vector<int> vis(adj.size(), -1);
    vis[start] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (auto [nxt, dis] : adj[cur]) {
            if (vis[nxt] == -1) {
                vis[nxt] = vis[cur] + dis;
                q.push(nxt);

                if (farthestDist < vis[nxt]) {
                    farthestDist = vis[nxt];
                    farthestNode = nxt;
                }
            }
        }
    }

    return returnDist ? farthestDist : farthestNode;
}

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

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    adj.resize(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int x, y, w; cin >> x >> y >> w;
        adj[x].emplace_back(y, w);
        adj[y].emplace_back(x, w);
    }

    int node1 = bfs(1, false);
    int node2 = bfs(node1, false);
    int diameter = bfs(node1, true);

    int treeRadius = radius();

    cout << diameter << "\n";
    cout << treeRadius << "\n";

    return 0;
}

int main1() {
    question();
    return 0;
}

#endif