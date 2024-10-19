// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> matrix;

void dfs(pair<int, int> cur, int depth) {
	vis[cur] = true;
	for(int nxt : adj[cur]) { 
		if (nxt == pre) continue;
		if(vis[nxt]) { 
			//get a cycle;
		} else {
			dfs(nxt, cur);
		}
	}
}


int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, t; cin >> n >> t;

    matrix.resize(n+1, vector<int>(n+1, -1));

    for(int i=0; i<t; i++){
        int r, c; cin >> r >> c;
        matrix[c][r] = 1;
    }

    dfs({1,1}, 0);

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif