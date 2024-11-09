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

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n, k; cin >> n >> k;
        vector<char> patch(n);
        for(int i=0; i<n; i++){
            cin >> patch[i];
        }
        int Gind = -1, Hind = -1;
        vector<char> newpatch(n, '.');
        int ans = 0;
        for(int i=0; i<n; i++){
            if(patch[i] == 'G'){
                if(Gind == -1 || Gind > i+k || Gind < i-k){
                    ans ++;
                    // plant
                    for(int j=i+k; j>=i-k; j--){
                        if(j<n){
                            if(newpatch[j] == '.'){
                                newpatch[j] = 'G';
                                Gind = j;
                                break;
                            }
                        }
                    }
                }
            }
            if(patch[i] == 'H'){
                if(Hind == -1 || Hind > i+k || Hind < i-k){
                    ans ++;
                    // plant
                    for(int j=i+k; j>=i-k; j--){
                        if(j<n){
                            if(newpatch[j] == '.'){
                                newpatch[j] = 'H';
                                Hind = j;
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << "\n";
        for(char i : newpatch){
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif