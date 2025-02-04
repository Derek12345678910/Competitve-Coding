// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> adj(502);
vector<vector<bool>> reachable(502, vector<bool>(502, false));

void bfs(int start, int n) {
    queue<int> q;
    vector<bool> vis(n + 1, false);
    q.push(start);
    vis[start] = true;

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        reachable[start][cur] = true;

        for (int nxt : adj[cur]) {
            if (!vis[nxt]) {
                vis[nxt] = true;
                q.push(nxt);
            }
        }
    }
}

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (i == a[i][j]) found = true;
            if (!found) adj[i].push_back(a[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        bfs(i, n); 
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (reachable[i][a[i][j]] && reachable[a[i][j]][i]) {
                cout << a[i][j] << "\n";
                break;
            }
        }
    }

    return 0;
}

int main1(){
    question();
    return 0;
}
#endif