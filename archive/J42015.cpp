// #include '../comp.h

#include <iostream>
#include <vector>
#include <map>

using namespace std;

#if 0

vector<pair<int, int>> sortMap(map<int, bool>& users){
    int n = users.size();
    vector<pair<int, int>> array(n);  

    int prev = 0;
    for(int i=0; i<n; i++){
        int lowest = 10000000;
        for(auto j : users){
            if(j.first != 0 && j.first < lowest && j.first > prev){
                lowest = j.first;
            }
            
        }
        prev = lowest;
        array[i].first = lowest;
        if(users[lowest] == true){
            array[i].second = -1;
        }
    }
    return array;
}

int question(){

    int n; cin >> n;

    vector<pair<char, int>> inputs(n);

    vector<int> time(n);

    map<int, bool> users;

    for(int i=0; i<n; i++) cin >> inputs[i].first >> inputs[i].second;

    // find all good ones
    for(int i=0; i<n; i++){
        if(inputs[i].first == 'W'){
            continue;
        }
        users[inputs[i].second] = (users[inputs[i].second] == true) ? false : true;
    }
    map<int, bool> wrong = users;
    for(int i=0; i<n; i++){
        if(inputs[i].first == 'W'){
            time[i] = inputs[i].second;
        }
        else if(users[inputs[i].second] == true){
            time[i] = 0;
            if(wrong[inputs[i].second] == true){
                time[i] = 1;
                wrong[inputs[i].second] = false;
            }
        }
        else{
            time[i] = 1;
        }
        //cout << time[i] << endl;
    }

    vector<pair<int, int>> array = sortMap(users);
    for(auto j : array){
        int first = 0;
        int amount = 0;
        for(int i=0; i<n; i++){
            if(j.second == -1){
                break;
            }
            if(inputs[i].second == j.first && inputs[i].first == 'R'){
                first = i;
            }
            else if(inputs[i].second == j.first && inputs[i].first == 'S'){
                for(int o=0; o<=first; o++){
                    amount-= time[o];
                }
                cout << amount << endl;
                for(int d=0; d<i; d++){
                    cout << d;
                    amount+=time[d];
                }
                j.second = amount;
            }
        }
        cout << j.first << " " << j.second << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif