// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

#define int long long
using namespace std;

const int MAX = 5008;
int n, h[MAX], pre[MAX][MAX];

int32_t main1() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> h[i];
    // calc for all of them
    for (int i=1; i<=n; i++) {
        // window size i
        int l = 1, r = i, best = 1e18;
        while (r <= n) {
            pre[l][r] = abs(h[l] - h[r]) + pre[l+1][r-1];
            //cout << i << " " << l << " " << r << " " << pre[l][r] << endl;
            best = min(best, pre[l][r]);
            l++; r++;
        }
        cout << best;
        if (i!=n) cout << " ";
    }
    cout << endl;
}
#endif