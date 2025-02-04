#include <iostream>
#include <vector>
#include <queue>

using namespace std;


#if 0
vector<vector<int>> prereq; 
vector<int> amt;   

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;

    prereq.resize(n + 1); 
    amt.resize(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int k; 
        cin >> k;

        for (int j = 0; j < k; j++) {
            int x; 
            cin >> x;
            prereq[x].push_back(i); 
            amt[i]++;   
        }
    }

    queue<int> q;
    vector<int> order;
    for (int i = 1; i <= n; i++) {
        if (amt[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        order.push_back(cur);
        for (int nxt : prereq[cur]) {
            amt[nxt]--;
            if (amt[nxt] == 0) {
                q.push(nxt);
            }
        }
    }
    for (int course : order) {
        cout << course << " ";
    }
    cout << endl;

    return 0;
}

int main1() {
    question();
    return 0;
}
#endif