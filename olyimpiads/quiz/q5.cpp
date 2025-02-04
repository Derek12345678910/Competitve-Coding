#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0
int n, m;
vector<vector<int>> adj(100000);
vector<int> degree(100000, 0);
int question(){

    cin.sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    vector<int> permute;
    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        degree[x]++;
    }

    queue<int> q;
    for(int i=1; i<n+1; i++){
        if(degree[i] == 0){
            q.push(i);
        }
    }
    int num = 1;
    while(!q.empty()){
        if(q.size() > 1){
            cout << "No";
            return 0;
        }
        int cur = q.front(); q.pop();
        for(int nxt : adj[cur]){
            degree[nxt] --;
            if(degree[nxt] == 0){
                q.push(nxt);
            }
        }
        permute[cur] = num;
        num ++ ;
    }
    cout << "Yes";
    for(int i=0; i<n; i++){
        cout << permute[i];
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif