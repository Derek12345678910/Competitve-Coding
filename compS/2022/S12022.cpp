// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    int ways = 0;

    int n;
    cin >> n;

    for (int y = 0; y * 5 <= n; y++) {
        // Check if the remainder when subtracting 5y from n is divisible by 4
        if ((n - 5 * y) % 4 == 0) {
            ways++;
        }
    }
    cout << ways << endl;
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif