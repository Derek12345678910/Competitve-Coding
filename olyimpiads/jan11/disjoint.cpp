#include <iostream>
#include <vector>
using namespace std;

#if 0

struct DisjointSet {
    vector<int> parent, rank;

    DisjointSet(int size) {
        parent.resize(size + 1);
        rank.resize(size + 1, 0);
        for (int i = 1; i <= size; i++) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    bool unionSets(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
            return true;
        }
        return false;
    }
};

int main1() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    DisjointSet ds(n);
    vector<int> mst;

    for (int i = 0; i < m; i++) {
        int u = edges[i].first;
        int v = edges[i].second;
        if (ds.unionSets(u, v)) {
            mst.push_back(i + 1);
        }
    }

    if (mst.size() == n - 1) {
        for (int idx : mst) {
            cout << idx << "\n";
        }
    } else {
        cout << "Disconnected Graph\n";
    }

    return 0;
}

#endif