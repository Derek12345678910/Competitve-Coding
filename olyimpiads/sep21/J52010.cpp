// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

const int xcon = 8;
const int ycon = 8;

int matrix[xcon][ycon];

vector<pair<int, int>> possible = {
    {2,1}, 
    {1,2},
    {2,-1},
    {1,-2},
    {-2,-1},
    {-1,-2},
    {-2,1},
    {-1,2}
};

void showmatrix(){
    cout << endl;
    for(int i=0; i<8; i++){
        cout << endl;
        for(int j=0; j<8; j++){
            cout << matrix[i][j];
        }
    }
}

int question(){

    int sx, sy, ex, ey; cin >> sx >> sy >> ex >> ey;

    queue<pair<int, int>> q;
    q.push({sx-1, sy-1});
    matrix[sx-1][sy-1] = 1;

    while(!q.empty()){
        int currx = q.front().first;
        int curry = q.front().second;
        int stage = matrix[currx][curry] + 1;
        //cout << currx << " " << curry << endl;
        if(currx == ex-1 && curry == ey-1){
            cout << matrix[currx][curry] - 1 << endl;
            break; 
        }
        q.pop();
        // all possible moves
        for(int i=0; i<8; i++){
            int newx = currx + possible[i].first;
            int newy = curry + possible[i].second;
            if(newx >= 0 && newx < xcon && newy >= 0 && newy < ycon){
                if(matrix[newx][newy] == 0){
                    matrix[newx][newy] = stage;
                    q.push({newx, newy});
                }
            }
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif