#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    string a; cin >> a;
    string b; cin >> b;

    for(int i=0; i<b.size(); i++){
        string nb;
        for(int j=i; j<b.size(); j++){
            nb += b[j];
        }
        for(int j=0; j<i; j++){
            nb += b[j];
        }
        if(a.find(nb)!=string::npos){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}


int main1(){
    question();
    return 0;
}
#endif