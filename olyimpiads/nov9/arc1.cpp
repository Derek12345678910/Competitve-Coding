#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int cur, asin; cin >> cur >> asin;
    int needed = 80 * (asin+1) - (cur * asin);
    if(needed <= 100 && needed > 0) cout << needed;
    else if(needed <= 0) cout << "0";
    else if(needed > 100) cout << "-1";

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif