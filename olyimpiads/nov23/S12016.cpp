#include <iostream>
#include <vector>
#include <string>

using namespace std;

#if 0

int ast = 0;
vector<int> org(27, 0);
vector<int> change(27, 0);

int question() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    for (char c : a) org[c - 'a']++;
    for (char c : b) {
        if (c != '*') {
            change[c - 'a']++;
        } else {
            ast++;
        }
    }
    bool check = true;
    for (int i = 0; i < org.size(); i++) {
        if (org[i] > change[i]) ast -= org[i] - change[i];
        else if (org[i] < change[i]) check = false;
    }
    if (ast < 0 || !check) cout << 'N';
    else cout << 'A';
    return 0;
}

int main1() {
    question();
    return 0;
}

#endif