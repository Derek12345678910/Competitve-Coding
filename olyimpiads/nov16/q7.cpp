#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#if 0
int n, m;
vector<int> seats;

bool check(int mid) {
    int pos = seats[0]; 
    int count = 1;  
        for (int i = 1; i < n; i++) {
        if (seats[i] - pos >= mid) {
            count++;
            pos = seats[i];
        }
        if (count == m) return true;
    }
    
    return false;
}

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        seats.emplace_back(x);
    }
    
    sort(seats.begin(), seats.end()); 

    int l = 1, r = seats[n - 1] - seats[0], ans = 0;
    
    while (l <= r) {
        int mid = floor((r+l) / 2);
        if (check(mid)) {
            ans = mid; 
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0; 
}

int main1() {
    question();
    return 0;
}
#endif