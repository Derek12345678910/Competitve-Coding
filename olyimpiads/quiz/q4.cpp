#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <climits>

using namespace std;

#if 0
int n;
vector<int> nums;

bool check(int mid) {
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            long long sum1 = prefix[i + 1];
            long long sum2 = prefix[j + 1] - prefix[i + 1];
            long long sum3 = prefix[n] - prefix[j + 1];
            
            long long maxSum = max({sum1, sum2, sum3});
            long long minSum = min({sum1, sum2, sum3});
            
            if (maxSum - minSum <= mid) {
                return true;
            }
        }
    }
    return false;
}

int question() {
    cin.sync_with_stdio(0); cin.tie(0);
    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int l = 2, h = INT_MAX, ans;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (check(mid)) {
            h = mid - 1;
            ans = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}

int main1() {
    question();
    return 0;
}
#endif
