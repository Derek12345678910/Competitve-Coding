// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

// another
int g(int x){
    cout << x;
    if(x == 1){
        return 1;
    }
    else {
        return g(x-1);
    }
}

// cycle len
void dfs(int cur) {
    vis[cur] = 1;
    for(int nxt : adj[cur]){
        if(vis[nxt] == 1){
            // cycle
            cycle = d[cur] - d[nxt] + 1;
        }
        else if (vis[nxt] == 0){
            d[nxt] = d[cur] + 1;
            dfs(nxt);
        }
    }
    vis[cur] = 2;
}

// backtrack 
// 0 -> x
int f(int x){
    if(x == 0){
        return 0;
    }
    f(x-1);
    cout << x << "\n";
    return x;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int x; cin >> x;

    f(x);

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif
