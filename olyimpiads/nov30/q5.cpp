#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0
vector<vector<pair<int, pair<int, int>>>> adj(101);
int question(){

    cin.sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int m; cin >> m;
    for(int i=0; i<n; i++){
        int x, y, a, b; cin >> x >> y >> a >> b;
        adj[x].emplace_back(y, (b, a));
        adj[y].emplace_back(x, (b,a));
    }
    vector<pair<int,int>> dis(101, pair<int, int>(100000, 100000));
    vector<bool> vis(101, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<pair<int,int>, int>>> q;
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif