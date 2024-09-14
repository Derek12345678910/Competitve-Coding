#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

#if 0

int N, M, K;

// Function to count good samples in a given sequence
int countGoodSamples(const vector<int>& sequence) {
    int goodSampleCount = 0;
    for (int start = 0; start < N; ++start) {
        unordered_set<int> uniqueNotes;
        for (int end = start; end < N; ++end) {
            if (uniqueNotes.count(sequence[end]) > 0) {
                break;
            }
            uniqueNotes.insert(sequence[end]);
            goodSampleCount++;
        }
    }
    return goodSampleCount;
}

// Function to generate sequences and check for exactly K good samples
bool generateSequence(vector<int>& sequence, const vector<int>& pitches, int pos) {
    if (pos == N) {
        return countGoodSamples(sequence) == K;
    }

    for (int pitch : pitches) {
        sequence[pos] = pitch;
        if (generateSequence(sequence, pitches, pos + 1)) {
            return true;
        }
    }
    return false;
}

int question() {
    cin >> N >> M >> K;

    vector<int> pitches(M);
    for (int i = 0; i < M; i++) {
        pitches[i] = i + 1;
    }

    vector<int> sequence(N);

    if (generateSequence(sequence, pitches, 0)) {
        for (int note : sequence) {
            cout << note << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

int main1() {
    question();
    return 0;
}

#endif