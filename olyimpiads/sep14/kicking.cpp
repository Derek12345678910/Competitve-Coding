#include <iostream>
#include <vector>

using namespace std;

#if 0

int question() {
    int n, m, k; 
    cin >> n >> m >> k;

    vector<vector<char>> input(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> input[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        vector<int> pa(m + 1, 0);
        vector<int> pb(m + 1, 0);
        
        for (int j = 1; j <= m; j++) {
            pa[j] = pa[j - 1] + (input[i][j - 1] == 'A' ? 1 : 0);
            pb[j] = pb[j - 1] + (input[i][j - 1] == 'B' ? 1 : 0);
        }

        string ans(m, ' ');
        for (int j = 1; j <= m; j++) {
            if (input[i][j - 1] == '.') {
                ans[j - 1] = '.';
            } else {
                if (input[i][j - 1] == 'A') {
                    ans[j - 1] = (pb[min(j + k, m)] - pb[j] == 0 ? 'Y' : 'N');
                } else {
                    ans[j - 1] = (pa[j - 1] - pa[max(j - k, 1) - 1] == 0 ? 'Y' : 'N');
                } 
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

int main1() {
    question();
    return 0;
}

#endif