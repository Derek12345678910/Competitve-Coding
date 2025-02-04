#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

std::vector<std::pair<int, int>> moves = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}
};

int question() {
    cin.sync_with_stdio(0); cin.tie(0);
    int n, m; 
    cin >> n >> m;
    int sx, sy; 
    cin >> sx >> sy;
    int ex, ey; 
    cin >> ex >> ey;
    sx--; sy--; ex--; ey--; 
    
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<vector<int>> dis(n, vector<int>(m, -1)); 
    
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        for (int j = 0; j < m; j++) {
            char o = x[j];
            if (o == '#') matrix[i][j] = 2; 
            if (o == '.') matrix[i][j] = 1; 
        }
    }

    queue<pair<int, int>> q;
    q.push({sx, sy});
    dis[sx][sy] = 0;

    while (!q.empty()) {
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();

        for (auto [newx, newy] : moves) {
            int ny = cury + newy;
            int nx = curx + newx;
            
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && matrix[nx][ny] == 1 && dis[nx][ny] == -1) {
                dis[nx][ny] = dis[curx][cury] + 1;
                q.push({nx, ny});
            }
        }
    }

    if (dis[ex][ey] == -1) {
        cout << -1;
        return 0;
    }
    cout << dis[ex][ey];
    return 0;
}

int main1() {
    question();
    return 0;
}
#endif