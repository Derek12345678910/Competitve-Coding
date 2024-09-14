// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

string a, b;

int question(){

    cin >> a >> b;

    if(a.size() == b.size()){
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]){
                cout << a[i] << " " << b[i] << "\n" << '-' << endl;
                return 0;
            }
        }
    }

    for(char c = 'a'; c <= 'z'; c++){
        string cpy = "";    
        for(int i=0; i<a.size(); i++) if(a[i] != c) cpy += a[i];
        pair<char, char> bad = {0, 0};
        bool works = true;
        if(cpy.size() != b.size()) continue;
        for(int i=0; i<cpy.size(); i++){
            cout << cpy << endl;
            if(cpy[i] != b[i]){
                if(bad.first == 0){
                    bad.first = cpy[i];
                    bad.second = b[i];
                } else {
                    if(bad.first != cpy[i]){
                        works = false;
                        break;
                    }
                }
            }
        }
        if(works){
            cout << bad.first << " " << bad.second << "\n" << c << endl;
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif