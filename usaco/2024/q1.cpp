#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

#if 0

int goal;
bool check(int mid){
    int size = (log10(mid) + 1);
    for(int i=1; i<size+1; i++){
        
    }
    if()
}

int question(){

    cin.sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n, p = 0; cin >> n;
        int h = n, l = 0;
        goal = ceil(n);
        while(l <= h){
            int mid = floor((l+h)/2);
            if(check(mid)){
                p = mid; 
                h = mid-1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << p << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif