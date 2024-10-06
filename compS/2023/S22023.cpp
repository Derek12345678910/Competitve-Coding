// #include '../comp.h

#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

#if 0

vector<int> input;
vector<int> highest;

void adjacent(vector<int>& subarray, int left, int right, int sum) {
    int len = right - left + 1;
    
    if (sum < highest[len - 1]) highest[len - 1] = sum;

    if (left - 1 >= 0 && right + 1 < input.size()) {
        int new_sum = sum + abs(input[left - 1] - input[right + 1]);
        adjacent(subarray, left - 1, right + 1, new_sum);
    }
}

int question() {
    int l;
    cin >> l;

    input.resize(l);
    highest.assign(l, numeric_limits<int>::max());

    for (int i = 0; i < l; i++) cin >> input[i];

    for (int i = 0; i < l; i++) {
        vector<int> subarray = {input[i]};
        adjacent(subarray, i, i, 0);

        if (i + 1 < l) {
            subarray = {input[i], input[i + 1]};
            int sum = abs(input[i] - input[i + 1]);
            adjacent(subarray, i, i + 1, sum);
        }
    }

    for (int i = 0; i < l; i++) {
        cout << highest[i] << " ";
    }

    return 0;
}

int main1() {
    question();
    return 0;
}

#endif