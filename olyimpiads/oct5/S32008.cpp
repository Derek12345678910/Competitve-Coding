// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

map<char, vector<pair<int, int>>> moves = {
    {'+', {{0, 1}, {1, 0}, {-1, 0}, {0, -1}}},
    {'-', {{1, 0}, {-1, 0}}}, 
    {'|', {{0, 1}, {0, -1}}},
    {'*', {}}
};

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for(int p = 0; p < t; p++){
        int y, x; cin >> y >> x;
        vector<vector<char>> matrix(y, vector<char>(x));
        vector<vector<int>> vis(y, vector<int>(x, -1));

        for(int i=0; i<y; i++){
            for(int j=0; j<x; j++){
                cin >> matrix[i][j];
            }
        }

        // end will be y - 1 x -1
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = 1;
        while(!q.empty()){
            int curx = q.front().second;
            int cury = q.front().first;
            q.pop();
            auto action = moves[matrix[cury][curx]];
            for(int i=0; i<action.size(); i++){
                int newx = curx + action[i].first;
                int newy = cury + action[i].second;
                if(newx >= 0 && newx < x && newy >= 0 && newy < y && vis[newy][newx] == -1 && matrix[newy][newx]  != '*'){
                    q.push({newy, newx});
                    vis[newy][newx] = vis[cury][curx] + 1;
                }
            }
        }
        cout << vis[y-1][x-1] << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif