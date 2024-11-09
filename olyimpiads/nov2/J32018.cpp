// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<int> dis(4);

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 4; i++) {
        cin >> dis[i];
    }

    vector<int> ans(5, 0);
    for (int i = 1; i < 5; i++) {
        ans[i] = ans[i - 1] + dis[i - 1];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << abs(ans[j] - ans[i]) << " ";
        }
        cout << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif