#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0 

struct dset {
    vector<int> parent, rank, enemy;
    dset(int size) {
        parent.resize(size + 1);
        rank.resize(size + 1, 0);
        enemy.resize(size + 1, -1);
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
    bool setEnemy(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);

        if (enemy[rootU] == -1) {
            enemy[rootU] = rootV;
            return true;
        }

        if (enemy[rootV] == -1) {
            enemy[rootV] = rootU;
            return true;
        }
        int enemyRootU = find(enemy[rootU]);
        int enemyRootV = find(enemy[rootV]);
        unionSets(enemyRootU, enemyRootV);

        return true;
    }
};

int question(){

    cin.sync_with_stdio(0); cin.tie(0);

    int n, m; cin >> n >> m;

    dset ds(n);

    for (int i = 0; i < m; i++) {
        char type; int p, q;
        cin >> type >> p >> q;
        if (type == 'F') {
            ds.unionSets(p, q);
        } else if (type == 'E') {
            ds.setEnemy(p, q);
        }
    }
    set<int> gangs;
    for (int i = 1; i <= n; i++) {
        gangs.insert(ds.find(i));
    }
    cout << gangs.size();

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif