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
    for(int i=0; i<n; i++){
        vector<pair<string, bool>> nums;
        int m, k; cin >> m >> k;
        for(int j=0; j<k; j++){
            string x; cin >> x;
            bool y; cin >> y;
            nums.emplace_back(x, y);
        }
        for(int i=0; i<k; i++){
            vector<bool> check(nums.size());

        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif