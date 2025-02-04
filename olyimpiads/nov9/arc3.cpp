#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string og; cin >> og;
    string nw; cin >> nw;
    int correct = 0;
    for(int i=0; i<n; i++){
        if(og[i] == nw[i]) correct ++ ;
    }
    int maxscore = correct;
    for (int i = 0; i < n; ++i) {
        int newscore = correct;
        if (i > 0 && og[i] == nw[i - 1]) newscore--;
        if (i < n - 1 && og[i + 1] == nw[i]) newscore++;
        maxscore = max(maxscore, newscore);
    }
    cout << maxscore;
    
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif