// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>

using namespace std;

#if 0

vector<vector<int>> matrix;

vector<vector<bool>> visited;

unordered_map<int, vector<pair<int, int>>> factor_cache;

int y, x; 

vector<pair<int, int>> factor(int num){
    if (factor_cache.find(num) != factor_cache.end()) return factor_cache[num];
    vector<pair<int, int>> factors;
    int high = (y > x) ? y : x;
    for(int i=1; i * i<=num; i++){
        if(i > high) break;
        if(num % i == 0){
            factors.emplace_back(i, num/i);
        }
    }
    factor_cache[num] = factors;    
    return factors;
}

int question(){

    scanf("%d %d", &y, &x);

    matrix.resize(y + 1, vector<int>(x+1));

    visited.resize(y + 1, vector<bool>(x+1, false));

    for(int yy=1; yy<y+1; yy++){
        for(int xx=1; xx<x+1; xx++){
            scanf("%d", &matrix[yy][xx]);
        }
    }

    queue<pair<int, int>> q;
    vector<pair<int, int>> factors = factor(matrix[1][1]);
    visited[1][1] = true;
    for(int i=0; i<factors.size(); i++){
        int fy = factors[i].first;
        int fx = factors[i].second;
        if (fy > 0 && fy <= y && fx > 0 && fx <= x && !visited[fy][fx]) {
            q.push({fy, fx});
        }
        if (fy > 0 && fx <= y && fx > 0 && fy <= x && !visited[fx][fy]) {
            q.push({fx, fy});
        }
    }

    while(!q.empty()){
        int cury = q.front().first;
        int curx = q.front().second;
        q.pop();
        if(cury == y && curx == x){
            printf("yes");
            return 0;
        }
        factors = factor(matrix[cury][curx]);
        for(int i=0; i<factors.size(); i++){
            int fy = factors[i].first;
            int fx = factors[i].second;
            if (fy > 0 && fy <= y && fx > 0 && fx <= x && !visited[fy][fx]) {
                q.push({fy, fx});
                visited[fy][fx] = true;
            }
            if (fy > 0 && fx <= y && fx > 0 && fy <= x && !visited[fx][fy]) {
                q.push({fx, fy});
                visited[fx][fy] = true;
            }
        }
    }

    printf("no");

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif
