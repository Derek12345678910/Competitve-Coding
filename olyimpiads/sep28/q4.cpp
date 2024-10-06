// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

const int totalsteps = 60;

vector<pair<int, int>> moves = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int question(){

    int t; cin >> t;

    for(int c=0; c<t; c++){
        int l, w; cin >> l >> w;
        vector<vector<char>> matrix(w);
        vector<vector<int>> matrix2(w, vector<int>(l, -1));
        int compx, compy, washx, washy;
        for(int i=0; i<w; i++){
            string input; cin >> input;
            for(int j=0; j<input.size(); j++){
                
                if(input[j] == 'C'){
                    compx = i;
                    compy = j;
                }
                else if(input[j] == 'W'){
                    washx = i;
                    washy = j;
                    matrix[i].emplace_back('O');
                    continue;
                }
                matrix[i].emplace_back(input[j]);
            }
        }
        queue<pair<int, int>> q;
        q.push({compx, compy});
        matrix[compx][compy] = 'X';
        matrix2[compx][compy] = 0;
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i=0; i<moves.size(); i++){
                int nx = x + moves[i].first;
                int ny = y + moves[i].second;
                if(nx >= 0 && nx < w && ny >= 0 && ny < l && matrix[nx][ny] == 'O'){
                    q.push({nx, ny});
                    matrix[nx][ny] = 'X';
                    matrix2[nx][ny] = matrix2[x][y] + 1;
                }
            }
        }
        if(matrix2[washx][washy] != -1 && matrix2[washx][washy] < totalsteps){
            cout << matrix2[washx][washy] << "\n";
        }
        else {
            cout << "#notworth" << "\n";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif