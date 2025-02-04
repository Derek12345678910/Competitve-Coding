// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <numeric>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    while(true){
        int n; cin >> n;
        if(n == 0) break;
        vector<vector<int>> adj(101);
        vector<int> vis(101, -1);
        for(int i=0; i<n; i++){
            int x, y; cin >> x >> y;
            adj[x].emplace_back(y);
        }
        int ans = 1;
        for(int i=1; i<n+1; i++){
            int far = 1;
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int cur = q.front(); q.pop();
                if(far < vis[cur]) far = vis[cur];
                for(int nxt : adj[cur]){
                    if(vis[nxt] == -1){
                        q.push(nxt);
                        vis[nxt] = vis[cur] + 1;
                    }
                }
            }
            ans = lcm(ans, far);
        }
        cout << ans << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif