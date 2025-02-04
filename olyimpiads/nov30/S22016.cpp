#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0); cin.tie(0);

    int type, n;
    cin >> type >> n;

    vector<int> dmoj(n);
    vector<int> peg(n);

    for (int i = 0; i < n; ++i) cin >> dmoj[i];
    for (int i = 0; i < n; ++i) cin >> peg[i];

    sort(dmoj.begin(), dmoj.end());
    sort(peg.begin(), peg.end());

    int ans = 0;

    if (type == 1) {
        for (int i = 0; i < n; ++i) {
            ans += max(dmoj[i], peg[i]);
        }
    } else {
        for (int i = 0; i < n; ++i) {
            ans += max(dmoj[i], peg[n - 1 - i]);
        }
    }

    cout << ans << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif