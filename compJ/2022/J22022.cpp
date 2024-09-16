// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    int players; cin >> players;

    vector<pair <int, int>> scores(players);

    for(int i=0; i<players; i++){
        cin >> scores[i].first >> scores[i].second;
    }

    char allGold = '+';
    int amount = 0;

    for(auto& p : scores){
        int points = p.first * 5;
        int fouls = p.second * 3;
        int total = points-fouls;
        if(total > 40){
            amount ++;
        }
        if(total <= 40){
            allGold = ' ';
        }
    }

    cout << amount << allGold << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif