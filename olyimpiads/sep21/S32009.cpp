// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

vector<vector<int>> friends = {{}, {6}, {6}, {4,5,6,15}, {3,5,6}, {3,4,6}, {1,2,3,4,5,7}, {6,8}, {7,9}, {8,10,12}, {9,11}, {10,12}, {9,11,13}, {12,14,15}, {13}, {3,13}, {17,18}, {16,18}, {16,17}};

int question(){
    friends.resize(50);
    bool running = true;

    while (running){
        char input; cin >> input;
        if(input == 'q'){
            running = false;
        }
        else if(input == 'i'){
            int x, y; cin >> x >> y;
            // new
            auto f1 = find(friends[x].begin(), friends[x].end(), y);
            auto f2 = find(friends[y].begin(), friends[y].end(), x);

            if(f1 == friends[x].end() || f2 == friends[y].end()){
                friends[x].emplace_back(y);
                friends[y].emplace_back(x);
            }
        }
        else if(input == 'd'){
            int x, y; cin >> x >> y;
            auto f1 = find(friends[x].begin(), friends[x].end(), y);
            auto f2 = find(friends[y].begin(), friends[y].end(), x);
            friends[x].erase(f1);
            friends[y].erase(f2);
        }
        else if(input == 'n'){
            int x; cin >> x;
            cout << friends[x].size() << "\n";
        }
        else if(input == 'f'){
            vector<bool> visited(50, false);
            int amount = 0;
            int x; cin >> x;
            visited[x] = true;
            for(int i=0; i<friends[x].size(); i++) visited[friends[x][i]] = true;
            for(int i=0; i<friends[x].size(); i++){
                queue<int> q;
                q.push(friends[x][i]);   
                while(!q.empty()){
                    int cur = q.front();
                    q.pop();
                    for(int j=0; j<friends[cur].size(); j++){
                        if(!visited[friends[cur][j]]){
                            amount ++;
                            visited[friends[cur][j]] = true;
                        }
                    }
                }
            }
            cout << amount << "\n";
        }
        else if(input == 's'){
            vector<int> visited(50, 0);
            bool found = false;
            int x, y; cin >> x >> y;
            queue<int> q;
            q.push(x);   
            visited[x] = 1;
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                if(cur == y){
                    found = true;
                    cout << visited[cur]-1 << "\n";
                    break; 
                }
                for(int j=0; j<friends[cur].size(); j++){
                    if(visited[friends[cur][j]] == 0){
                        q.push(friends[cur][j]);
                        visited[friends[cur][j]] = visited[cur]+1;
                    }
                }
            }
            if(!found){
                cout << "Not connected" << "\n";
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