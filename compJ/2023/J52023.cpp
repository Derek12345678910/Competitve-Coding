// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

char matrix[101][101];

map<int, pair<int, int>> directions = {
    {0,{0, 1}},
    {1, {1, 1}},
    {2, {1, 0}},
    {3, {1, -1}},
    {4, {0, -1}},
    {5, {-1, -1}},
    {6, {-1, 0}},
    {7, {-1, 1}}
};

vector<int> turns = {2, 6};

int ans = 0;

int R, C; 

string word; 

void dfs(int r, int c, int i, int dir, bool turn){
    if(i == word.size()){
        ans ++;
        return;
    }
    int nc, nr; nc = c + directions[dir].first; nr = r + directions[dir].second;
    // check grid
    if(0 <= nc && nc < C && 0 <= nr && nr < R && matrix[nr][nc] == word[i]){
        // move along direction
        dfs(nr, nc, i+1, dir, turn);
    }
    // turn if we have not turned yet
    if(!turn && i > 1){
        for(int t : turns){
            t = (dir+t)%8;
            nc = c + directions[t].first; nr = r + directions[t].second;
            if(0 <= nc && nc < C && 0 <= nr && nr < R && matrix[nr][nc] == word[i]){
                dfs(nr, nc, i+1, t, true);
            }
        }
    }
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> word;

    cin >> R >> C;
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(matrix[i][j] == word[0]){
                for(int d = 0; d<8; d++){
                    dfs(i, j, 1, d, false);
                }
            }
        }
    }

    cout << ans;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif