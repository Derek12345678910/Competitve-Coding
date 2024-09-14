// #include '../comp.h

#if 0

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm> // For find()

using namespace std;

auto lookFor(vector<string>& array, string& searchFor) {
    auto search = find(array.begin(), array.end(), searchFor);
    return search;
}

int question() {
    int problems = 0;

    int x, y, g;

    cin >> x;
    map<int, vector<string>> together;

    for (int i = 0; i < x; i++) {
        together[i].resize(2);
        for (int t = 0; t < 2; t++) {
            cin >> together[i][t];
        }
    }

    cin >> y;
    map<int, vector<string>> cannot;
    for (int i = 0; i < y; i++) {
        cannot[i].resize(2);
        for (int t = 0; t < 2; t++) {
            cin >> cannot[i][t];
        }
    }

    cin >> g;
    map<int, vector<string>> groups;

    for (int i = 0; i < g; i++) {
        groups[i].resize(3);
        for (int ii = 0; ii < 3; ii++) {
            cin >> groups[i][ii];
        }
    }

    // Process groups
    for (int i = 0; i < g; i++) {
        auto group = groups[i];

        // Check 'together' conditions
        for (auto it = together.begin(); it != together.end(); ) {
            auto search = lookFor(group, it->second[0]);
            if (search != group.end()) { // it->second[0] exists in the group
                auto search2 = lookFor(group, it->second[1]);
                if (search2 == group.end()) { // it->second[1] is missing
                    problems++;
                    it = together.erase(it);  // Remove the condition and move to the next
                    continue;  // Skip incrementing 'it' since erase returns the next valid iterator
                }
            }
            ++it;  // Move to the next entry if no violation
        }

        // Check 'cannot' conditions
        for (auto it = cannot.begin(); it != cannot.end(); ) {
            auto search = lookFor(group, it->second[0]);
            if (search != group.end()) {  // it->second[0] exists in the group
                auto search2 = lookFor(group, it->second[1]);
                if (search2 != group.end()) {  // it->second[1] also exists in the group
                    problems++;
                    it = cannot.erase(it);  // Remove the condition and move to the next
                    continue;  // Skip incrementing 'it' since erase returns the next valid iterator
                }
            }
            ++it;  // Move to the next entry if no violation
        }
    }

    cout << problems << endl;

    return 0;
}

int main1() {
    question();
    return 0;
}

#endif