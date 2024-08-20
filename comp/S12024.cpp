// #include "../comp.h"

#include <iostream>
#include <vector>

using namespace std;

int S12024() {
    long N;

    //cout << "The number of total people: ";
    cin >> N;

    int matches = 0;

    int diameter = N / 2;

    // vector of hats and people
    vector<int> tableSeats(N);

    // ask for hats
    for (int i = 0; i < N; i++) {
        //cout << "Hat for person " << i << ": ";
        cin >> tableSeats[i];
    }

    // check matches
    for (int i = 0; i < diameter; i++) {
        if (tableSeats[i] == tableSeats[i + diameter]) {
            matches += 2;
        }
    }
    return matches;
}

/* NEEDED FOR COMP SUBMISSION
int main (){
    cout << S12024();
    return 0;
}
*/