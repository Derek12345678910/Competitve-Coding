#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int S22024() {
    int T, N;

    // Number of strings & number of letters
    cin >> T >> N;

    vector<string> strings(T);  // Correctly size the vector to hold T strings

    for (int i = 0; i < T; i++) {
        cin >> strings[i];  // Input T strings into the vector
    }

    // Analyze strings and return an output
    for (int i = 0; i < T; i++) {
        unordered_map<char, int> letterType;

        // Add the number of occurrences of each letter in the string to the map
        for (int ii = 0; ii < N; ii++) {
            letterType[strings[i][ii]] += 1;
        }

        // Create a heavy-light string 
        string weight = "";

        for (int ii = 0; ii < N; ii++) {
            if (letterType[strings[i][ii]] > 1)  // HEAVY
                weight += "H";
            else  // LIGHT
                weight += "L";
        }

        // Check if any weight repeats consecutively
        char previous = 'A';
        bool hasRepeated = false;

        for (int ii = 0; ii < N; ii++) {
            if (weight[ii] == previous) {
                cout << 'F' << endl;
                hasRepeated = true;
                break;
            } else {
                previous = weight[ii];
            }
        }

        if (!hasRepeated) {
            cout << 'T' << endl;
        }
    }

    return 0;
}
/*
int main() {
    S22024();
    return 0;
}
*/