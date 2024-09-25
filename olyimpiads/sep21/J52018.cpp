// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#if 0

vector<vector<int>> adjlist;
vector<int> visited;

int question(){

    int pages; cin >> pages;
    visited.resize(pages, 0);
    adjlist.resize(pages);
    for(int i=0; i<pages; i++){
        int m; cin >> m;
        for(int t=0; t<m; t++){
            int p; cin >> p;
            adjlist[i].emplace_back(p-1);
        }
    }

    queue<int> q;
    visited[0] = 1;
    q.push(0);

    while(!q.empty()){
        int curr = q.front();
        int stage = visited[curr] + 1;
        q.pop();

        for(int i=0; i<adjlist[curr].size(); i++){
            if(adjlist[curr][i] != 0){
                if(visited[adjlist[curr][i]] == 0){
                    visited[adjlist[curr][i]] = stage;
                    q.push(adjlist[curr][i]);
                }
            }
        }
    }
    /*
    6 
    2 2 5
    1 3
    1 4
    0
    1 6
    0
    */
    bool found = true;
    int lowest = 1000000;
    for(int i=0; i<visited.size(); i++){
        if(adjlist[i].size() == 0 && visited[i] != 0){
            if(visited[i] < lowest){
                lowest = visited[i];
            }
        }
        if(visited[i] == 0){
            found = false;
        }
    }

    if(found){
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
    cout << lowest << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif