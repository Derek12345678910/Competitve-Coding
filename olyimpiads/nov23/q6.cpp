#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0
vector<vector<int>> adj(901);
map<string, int> users;
vector<string> username(901);
vector<int> degree(901);
vector<int> ans;
set<int> invalid;

void cycle(int cur){
    queue<int> q; vector<bool> vis(901, false);
    q.push(cur); vis[cur] = true;
    while(!q.empty()){
        int c = q.front(); q.pop();
        invalid.insert(c);
        for(int nxt : adj[c]){
            if(!vis[nxt]){
                q.push(nxt);
                vis[nxt] = true;
            }
        }
    }
}

int question(){

    cin.sync_with_stdio(0); cin.tie(0);
    int n = 0;
    int k; cin >> k;
    for(int i=0; i<k; i++){
        string x, y; cin >> x >> y;
        if(users[x] == 0){
            n++; users[x] = n; username[n] = x;
        }
        if(users[y] == 0){
            n++; users[y] = n; username[n] = y;
        }
        degree[users[x]]++;
        adj[users[y]].emplace_back(users[x]);
    }
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0; i<n+1; i++){
        if(degree[i] == 0) q.push(i);
    }
    while(!q.empty()){
        int cur = q.top(); q.pop();
        ans.emplace_back(cur);
        for(int nxt : adj[cur]){
            degree[nxt]--;
            if(degree[nxt] == 0) q.push(nxt);
        }
    }
    for (int i = 0; i < n+1; i++) {
        if (degree[i] > 0) cycle(i);
    }
    for(int i=1; i<ans.size(); i++){
        if(invalid.find(ans[i]) == invalid.end()) cout << username[ans[i]] << "\n";
    }
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif