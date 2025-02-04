#include <iostream>
#include <vector>

using namespace std;

#if 0

int n;
vector<vector<bool>> matrixA;
vector<vector<bool>> matrixB;

bool check() {
    vector<vector<bool>> newMatrix(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            newMatrix[i][j] = matrixA[n - j - 1][i];
        }
    }
    matrixA = newMatrix;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(newMatrix[i][j] == 1){
                if (newMatrix[i][j] != matrixB[i][j]) {
                    return false;
                }
            }
        }
    }
    return true;
}

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    matrixA.resize(n, vector<bool>(n));
    matrixB.resize(n, vector<bool>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            matrixA[i][j] = (x == 1);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            matrixB[i][j] = (x == 1);
        }
    }

    for (int i = 0; i < 4; i++) {
        if (check()) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}

int main1() {
    question();
    return 0;
}
#endif