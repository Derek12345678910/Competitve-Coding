// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    string s; cin >> s;

    int cntl = 0, cnts = 0;

    int ans = 0, size = s.size();

    for(int i=0; i<size; i++){
        if(s[i] == 'L'){
            cntl++;
        }
        if(s[i] == 'S'){
            cnts++;
        }
    }

    // swap all Ls and Ss within thier ranges
    for(int l = 0, n = size-1; l < cntl && n >= size-cnts;){
        while(l < n && s[l] != 'S'){
            l++;
        }
        while(l < n && s[n] != 'L'){
            n--;
        }
        if (l < cntl && n >= size-cnts) {
            swap(s[l], s[n]);
            ans++;
        }
    }

    for(int l=0; l < cntl; l++){
        if(s[l] != 'L'){
            ans++;
        }
    }

    for(int n = size-cnts; n < size; n++){
        if(s[n] != 'S'){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif