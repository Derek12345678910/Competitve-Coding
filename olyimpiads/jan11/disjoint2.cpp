#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#if 0

struct disjoint {
    vector<int> parent, rank;

    disjoint(int size) {
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


int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;

    vector<int> weights(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> weights[i];
    }
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 1; i < n; i++) {
        edges.push_back({weights[i-1],{i, i + 1}});
    }
    for (int i = 1; i + k <= n; i++) {
        edges.push_back({0, {i, i + k}}); 
    }

    sort(edges.begin(), edges.end());

    disjoint ds(n);
    int mstWeight = 0, edgesUsed = 0;

    for (auto edge : edges) {
        if (ds.unionSets(edge.second.first, edge.second.second)) {
            mstWeight += edge.first;
            edgesUsed++;
            if (edgesUsed == n - 1) break;
        }
    }

    cout << mstWeight;
    return 0;
}

int main1() {
    question();
    return 0;
}

#endif