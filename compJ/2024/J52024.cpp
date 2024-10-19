// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<pair<int, int>> moves = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

map<char, int> value = {{'S', 1}, {'M', 5}, {'L', 10}};

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int x, y; cin >> y >> x;

    vector<vector<char>> matrix(y, vector<char>(x));

    vector<vector<bool>> vis(y, vector<bool>(x, false));

    for(int j=0; j<y; j++){
        for(int i=0; i<x; i++){
            cin >> matrix[j][i];
        }
    }

    int sx, sy; cin >> sy >> sx;

    int ans = 0;

    queue<pair<int, int>> q;
    q.push({sy, sx});
    vis[sy][sx] = true;

    while(!q.empty()){
        int curx = q.front().second;
        int cury = q.front().first;
        q.pop();
        char curplant = matrix[cury][curx];
        ans += value[curplant];
        for(int i=0; i<moves.size(); i++){
            int newx = curx + moves[i].first;
            int newy = cury + moves[i].second;  
            if(newx >= 0 && newx < x && newy >= 0 && newy < y && vis[newy][newx] == false && matrix[newy][newx] != '*'){
                q.push({newy, newx});
                vis[newy][newx] = true;
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