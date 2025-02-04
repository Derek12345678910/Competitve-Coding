#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

vector<vector<int>> matrix;
int n;

int charToDigit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    else if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10;
    }
}

bool isLatinSquare() {
    for (int i = 0; i < n; i++) {
        set<int> row;
        for (int j = 0; j < n; j++) {
            row.insert(matrix[i][j]);
        }
        if (row.size() != n) {
            return false;
        }
    }

    for (int j = 0; j < n; j++) {
        set<int> col;
        for (int i = 0; i < n; i++) {
            col.insert(matrix[i][j]);
        }
        if (col.size() != n) {
            return false;
        }
    }
    return true;
}

bool isReducedForm() {
    for (int i = 1; i < n; i++) {
        if (matrix[0][i] < matrix[0][i - 1]) {
            return false;
        }
    }

    for (int i = 1; i < n; i++) {
        if (matrix[i][0] < matrix[i - 1][0]) {
            return false;
        }
    }

    return true;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    matrix.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < n; j++) {
            matrix[i][j] = charToDigit(row[j]);
        }
    }

    if (!isLatinSquare()) {
        cout << "No" << endl;
    } else {
        if (isReducedForm()) {
            cout << "Reduced" << endl;
        } else {
            cout << "Latin" << endl;
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif