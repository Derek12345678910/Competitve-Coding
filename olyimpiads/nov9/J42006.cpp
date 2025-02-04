#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<int>> constraint = {
    {},
    {2},
    {},
    {},
    {1, 3},
    {3},
    {},
    {1}
};

vector<bool> doable = {false, false, true, true, false, false, true, false};

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    bool inputting = true;
    while(inputting){
        int x, y; cin >> x >> y;
        if(x == 0 && y == 0){
            inputting = false;
            break;
        }
        else {
            constraint[y].emplace_back(x);
            doable[y] = false;
        }
    }

    queue<int> q;
    vector<int> ans;
    vector<bool> vis(8, false);
    for(int i=1; i<8; i++){
        bool ava = true;
        for(int con : constraint[i]){
            if(!doable[con] || !vis[con]) ava = false;
            if(ava) doable[i] = true;
        }
    }
    for(int i=1; i<doable.size(); i++){
        if(doable[i]){
            q.push(i);
            vis[i] = true;
            ans.emplace_back(i);
            break;
        }
    }
    while(!q.empty()){
        int cur = q.front(); q.pop();
        // check if something is avalible now
        for(int i=1; i<8; i++){
            bool ava = true;
            for(int con : constraint[i]){
                if(!doable[con] || !vis[con]) ava = false;      
            }
            if(ava) doable[i] = true;
        }
        
        for(int i = 1; i<doable.size(); i++){
            if(doable[i] && !vis[i]) {
                q.push(i);
                vis[i] = true;
                ans.emplace_back(i);
                break;
            }
        }
    }   
    if(ans.size() != 7){
        cout << "Cannot complete these tasks. Going to bed.";
    }
    else {
        for(int i=0; i<7; i++){
            cout << ans[i] << " ";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif