// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

char matrix[26][26]; bool vis[26][26];

vector<string> words(51);

int n; 

vector<pair<int, int>> moves = {
    {0, 1},
    {1, 1},
    {1, 0},
    {1, -1},
    {0, -1},
    {-1, -1},
    {-1, 0},
    {-1, 1}
};

bool findword(string word, int idx, int x, int y){
    vis[y][x] = true;
    if(idx == word.size()-1){
        vis[y][x] = false;
        return true;
    }
    for(pair<int, int> move : moves){
        int nx = x + move.first;
        int ny = y + move.second;
        if(0 <= nx && nx < n && 0 <= ny && ny < n && !vis[ny][nx]){
            if(matrix[ny][nx] == word[idx+1]){
                if (findword(word, idx+1, nx, ny)){
                    vis[y][x] = false;
                    return true;
                }
            }
        }
    }
    vis[y][x] = false;
    return false;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int wor; cin >> wor;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char x; cin >> x;
            matrix[i][j] = tolower(x); 
        }
    }

    for(int i=0; i<wor; i++){
        string ww; cin >> ww;
        string neww;
        for(char l : ww){
            neww += tolower(l);
        }
        words[i] = neww;
    }

    for(int w=0; w<wor; w++){
        bool found = false;
        for(int i=0; i<n && !found; i++){
            for(int j=0; j<n && !found; j++){
                if(matrix[i][j] == words[w][0]){
                    if(findword(words[w], 0, j, i)){
                        found = true;
                    }
                }
            }
        }
        if(found){
            cout << "good puzzle!" << "\n";
        }
        else {
            cout << "bad puzzle!" << "\n";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif