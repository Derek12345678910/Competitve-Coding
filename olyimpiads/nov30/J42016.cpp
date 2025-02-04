#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <iomanip>

using namespace std;

#if 0
bool isRushHour(int hour) {
    return (hour >= 7 && hour < 10) || (hour >= 15 && hour < 19);
}

int question(){

    cin.sync_with_stdio(0); cin.tie(0);
    string s;
    cin >> s;

    int hr = stoi(s.substr(0, 2));
    int min = stoi(s.substr(3, 2));

    int time = hr * 60 + min;
    double r = 120;

    while (r > 0) {
        int cur = time / 60;
        if (isRushHour(cur)) {
            r -= 0.5;
        } else {
            r -= 1.0;
        }
        time++;
    }
    int arihr = (time / 60) % 24;
    int arimin = time % 60;

    cout << setw(2) << setfill('0') << arihr << ":"
         << setw(2) << setfill('0') << arimin << endl;

    return 0;
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif