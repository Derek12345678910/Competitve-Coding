#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#if 0
vector<vector<int>> adj(10001);
vector<int> degree(100001, 0);

int question() {
    cin.sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;

    for (int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        degree[y]++;
    }

    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 1; i <= n; i++) {
        if (degree[i] == 0) q.push(i);
    }

    int processed = 0;
    while (!q.empty()) {
        int cur = q.top(); q.pop();
        processed++;
        for (int nxt : adj[cur]) {
            degree[nxt]--;
            if (degree[nxt] == 0) q.push(nxt);
        }
    }

    cout << (processed == n ? "Y" : "N");
    return 0;
}

int main1() {
    question();
    return 0;
}
#endif