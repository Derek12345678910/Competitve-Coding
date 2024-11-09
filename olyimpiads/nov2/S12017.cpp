// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> swift(n);
    vector<int> sema(n);
    for(int i=0; i<n; i++)cin >> swift[i];
    for(int i=0; i<n; i++)cin >> sema[i];

    vector<int> pswift(n); pswift[0] = swift[0];
    vector<int> psema(n); psema[0] = sema[0];
    for(int i=1; i<n; i++) pswift[i] = pswift[i-1] + swift[i];
    for(int i=1; i<n; i++) psema[i] = psema[i-1] + sema[i];

    for(int i=n-1; i>=0; i--){
        if(pswift[i] == psema[i]){
            cout << i + 1; 
            return 0;
        }
    }

    cout << 0;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif