// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

vector<pair<int, int>> moves = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int x, y; cin >> y >> x;

    vector<vector<char>> matrix(y, vector<char>(x));

    pair<int, int> st, ed;

    for(int j=0; j<y; j++){
        for(int i=0; i<x; i++){
            cin >> matrix[j][i];
            if(matrix[j][i] == 's'){
                st = {j, i};
            }
            else if(matrix[j][i] == 'e'){
                ed = {j, i};
            }
        }
    }

    queue<pair<int, int>> q;
    vector<vector<int>> vis(y, vector<int>(x, -1));
    q.push(st);
    vis[st.first][st.second] = 0;

    while(!q.empty()){
        int curx = q.front().second;
        int cury = q.front().first;
        q.pop();

        for(int i=0; i<moves.size(); i++){
            int newx = curx + moves[i].first;
            int newy = cury + moves[i].second;
            if(newx > -1 && newx < x && newy > -1 && newy < y && vis[newy][newx] == -1 && matrix[newy][newx] != 'X'){
                q.push({newy, newx});
                vis[newy][newx] = vis[cury][curx] + 1;
            }
        }
    }

    int sub = (vis[ed.first][ed.second] == -1) ? 0 : -1;
    cout << vis[ed.first][ed.second] + sub;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif