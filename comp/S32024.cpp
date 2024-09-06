// #include '../comp.h

#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

bool canTransform(vector<int>& A, vector<int>& B, vector<tuple<char, int, int>>& swipes){
    int n = A.size();
    int start = -1;
    int end = -1;

    // the number that is being swiped
    int target = -1;

    // bugged
    bool valid = true;

    // find the start and end of the swipe
    for (int i=0; i < n; i++){
        // if not equal means something was changed
        if (A[i] != B[i]){

            target = B[i]; // is B because its the changed target

            // is the end because start was already done
            if(start == -1){
                start = i;
            } else {
                end = i;
            }
        }
    }

    // if its a 1 change 
    if (end == -1){
        end = start;
    }

    // weird weird ones.
    // if the original doesnt even have the target

    bool KILL = false;

    // check all valid
    for (int i=start; i < end; i++){
        if (B[i] != target){
            valid = false;
        }
    }

    if (target != -1){
        bool found = false;
        for (int i=0; i < n; i++){
            if(A[i] == target){
                found = true;
            }
        }
        if (found == false){
            KILL = true;
            valid = false;
        }
        for (int i=0; i < n; i++){
            if (A[i] != B[i]){
                valid = false;
            }
        }
    }

    // compare the ends to see which way it was swiped
    if(A[start-1] == target && start-1 > -1){
        swipes.emplace_back('R', start-1, end);
        valid = true;
    } 
    else if (A[end+1] == target && end+1 < n +1) {
        swipes.emplace_back('L', start, end+1);
        valid = true;
    }

    if (KILL == true){
        // KILL
        valid = false;
    }
    
    return valid;
}

void printSwipes(vector<tuple<char, int, int>>& swipes){
    cout << "YES" << endl;
    cout << swipes.size() << endl;
    for (auto& swipe : swipes) {
        char type;
        int l, r;
        tie(type, l, r) = swipe;
        cout << type << " " << l << " " << r << endl;
    }
}

int S32024(){
    int N;
    // Amount of numbers in array
    cin >> N;

    // Create two vectors with inputs in them
    vector<int> A(N), B(N);
    
    // make default
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    // make game array
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    vector<tuple<char, int, int>> swipes;

    if (canTransform(A, B, swipes)){
        printSwipes(swipes);
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

#if 0
int main1(){
    S32024();
    return 0;
}
#endif