// #include '../comp.h

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#if 0

vector<int> moves = {-1, 1, 2};
vector<int> visited;

int question(){

    visited.resize(100001, -1);

    int x, y; cin >> x >> y;

    queue<int> q;
    q.push(x);
    visited[x] = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        if(cur == y){
            cout << visited[cur] << endl;
            break;
        }
        for(int i=0; i<moves.size(); i++){
            int newx = cur;
            if(moves[i] == 2){  
                newx = cur * 2;
            }
            else {
                newx = cur + moves[i];
            }
            if(newx >= 0 && newx < 100001){
                if(visited[newx] == -1){
                    visited[newx] = visited[cur] + 1;
                    q.push(newx);
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