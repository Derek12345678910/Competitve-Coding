// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

vector<vector<char>> matrix;

int rooms = 0;

int tiles = 0;

int x, y; 

vector<pair<int, int>> moves = {
    {0, 1},
    {1, 0},
    {0, -1},
    {-1, 0}
};

vector<int> roomsize;

int bfs(int sx, int sy){
    int t = 1;
    queue<pair<int, int>> q;
    q.push({sx, sy});
    matrix[sy][sx] = char(rooms);
    while(!q.empty()){
        int currx = q.front().first;
        int curry = q.front().second;
        q.pop();
        for(int i=0; i<moves.size(); i++){
            int newx = currx + moves[i].first;
            int newy = curry + moves[i].second;
            if(newy < 0 || newy >= y || newx < 0 || newx >= x){
                continue;
            }

            if(matrix[newy][newx] == '.'){
                t++;
                q.push({newx, newy});
                matrix[newy][newx] = char(rooms);
            }
        }
    }
    roomsize.emplace_back(t);
    return 0;
}

int question(){
    
    cin >> tiles >> y >> x;

    matrix.resize(y, vector<char>(x));

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            if(matrix[i][j] == '.'){
                rooms++;
                bfs(j, i);
            }
        }
    }
    rooms = 0;
    sort(roomsize.begin(), roomsize.end());

    for(int i=roomsize.size()-1; i>=0; i--){
        if(roomsize[i] <= tiles){
            tiles -= roomsize[i];
            rooms ++ ;
        }
        else {
            break;
        }
    }

    string r = (rooms == 1) ? "room" : "rooms";

    cout << rooms << " " << r << ", " << tiles << " square metre(s) left over" << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif