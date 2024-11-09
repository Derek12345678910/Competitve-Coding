// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

#if 0

using namespace std;

void rotate90(vector<vector<int>> &table, int n) {
    vector<vector<int>> rotated(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            rotated[j][n - i - 1] = table[i][j];
        }
    }
    table = rotated;
}

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> table(n, vector<int>(n));

    int highest = 0;
    int lowest = 1e9;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> table[i][j];
            if(highest < table[i][j]) highest = table[i][j];
            if(lowest > table[i][j]) lowest = table[i][j];
        }
    }

    while(table[0][0] != lowest || table[n-1][n-1] != highest) {
        rotate90(table, n);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

int main1() {
    question();
    return 0;
}

#endif