// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int a, b, k;

bool f(int val){
    // base case
    if(val == 0){
        return true;
    }
    if(val < 0){
        return false;
    }
    if(f(val-a)){
        return true;
    }
    if(f(val-b)){
        return true;
    }
    return false;
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b >> k;
        bool found = false;

        if(f(k-a)){
            found = true;
        }
        else if(f(k-b)){
            found = true;
        }

        if(found){
            cout << "YES" << "\n";
        }
        else { 
            cout << "NO" << "\n";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif