// #include '../comp.h

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

#if 0

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n; vector<int> pos(n);
    for (int i = 0; i < n; i++) {
        cin >> pos[i];
    }

    sort(pos.begin(), pos.end());

    double lowest = 1e9;

    for (int i = 1; i < n - 1; i++) {
        double total = (pos[i + 1] - pos[i - 1]) / 2.0;
        if (lowest > total) lowest = total;
    }

    cout << fixed << setprecision(1) << lowest << '\n';

    return 0;
}

int main1() {
    question();
    return 0;
}

#endif