#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

bool check(const string &s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int question(){

    cin.sync_with_stdio(0); cin.tie(0);

    string s; cin >> s;
    int ans = 1;

    int n = s.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            string substring = s.substr(i, j - i + 1);
            if (check(substring)) {
                ans = max(ans, (int)substring.size());
            }
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