// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

// idea 
// find cycle 
// then find the numbers in the cycle 
// modulo it 
// (extra scenariio there is a number outside the cycle run it first)

vector<int> portal(200001);
vector<int> cycle;
vector<int> dis(200001);
vector<int> vis(200001);
long long len = 0;
int cycle_start = -1;

void dfs(long long length, int cur) {
    vis[cur] = length;
    int next_town = portal[cur - 1];
    
    if (vis[next_town] > 0) {
        cycle_start = next_town;
        len = length - vis[next_town] + 1;
        return;
    } else if (vis[next_town] == 0) {
        dfs(length + 1, next_town);
    }
}

int question() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, k;
    cin >> n >> k;
    for (long long i = 0; i < n; i++) {
        cin >> portal[i];
    }

    dfs(0, 1);

    int cur = 1;
    if (cycle_start == -1 || k < vis[cycle_start]) {
        for (int i = 0; i < k; ++i) {
            cur = portal[cur - 1];
        }
    } else {
        k -= vis[cycle_start];
        k %= len;

        cur = cycle_start;
        for (int i = 0; i < k; ++i) {
            cur = portal[cur - 1];
        }
    }

    cout << cur << endl;
    return 0;
}

int main1() {
    question();
    return 0;
}

#endif
