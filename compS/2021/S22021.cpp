#include <iostream>
#include <vector>

using namespace std;

#if 0

vector<int> row;
vector<int> col;

int question() {

    int x, y; cin >> x >> y;
    row.resize(x+1, 0);
    col.resize(y+1, 0);
    int r; cin >> r;
    for(int i=0; i<r; i++){
        char input; cin >> input; 
        int m; cin >> m;
        if(input=='R') row[m] = (row[m]==1) ? 0 : 1;
        if(input=='C') col[m] = (col[m]==1) ? 0 : 1;
    }

    int ans = 0;
    for(int i=1; i<x+1; i++){
        for(int j=1; j<y+1; j++){
            if((row[i] + col[j])%2 == 1){
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}

int main1() {
    question();
    return 0;
}
#endif