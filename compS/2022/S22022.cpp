#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <utility> // For std::pair

using namespace std;

#if 0 

// Hash function for std::pair<string, string>
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator ()(const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2; // Combine the two hash values
    }
};

// A helper function to check if a pair of students is in the same group
bool inSameGroup(const unordered_map<string, int>& studentGroupMap, const string& student1, const string& student2) {
    return studentGroupMap.at(student1) == studentGroupMap.at(student2);
}

int main1() {
    int x, y, g;
    cin >> x;

    unordered_set<pair<string, string>, pair_hash> mustBeTogether;
    for (int i = 0; i < x; i++) {
        string student1, student2;
        cin >> student1 >> student2;
        if (student1 > student2) {
            swap(student1, student2);
        }
        mustBeTogether.insert({student1, student2});
    }

    cin >> y;
    unordered_set<pair<string, string>, pair_hash> mustBeSeparate;
    for (int i = 0; i < y; i++) {
        string student1, student2;
        cin >> student1 >> student2;
        if (student1 > student2) {
            swap(student1, student2);
        }
        mustBeSeparate.insert({student1, student2});
    }

    cin >> g;
    unordered_map<string, int> studentGroupMap;
    for (int i = 0; i < g; i++) {
        vector<string> group(3);
        for (int j = 0; j < 3; j++) {
            cin >> group[j];
            studentGroupMap[group[j]] = i;  // Assign group number to the student
        }
    }

    int violations = 0;

    // Check "must be together" constraints
    for (const auto& pair : mustBeTogether) {
        if (!inSameGroup(studentGroupMap, pair.first, pair.second)) {
            violations++;
        }
    }

    // Check "must be separate" constraints
    for (const auto& pair : mustBeSeparate) {
        if (inSameGroup(studentGroupMap, pair.first, pair.second)) {
            violations++;
        }
    }

    cout << violations << endl;

    return 0;
}

#endif