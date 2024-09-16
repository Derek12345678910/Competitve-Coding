// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int n, k;

struct marble{
    int length;
    int i1;
    int i2;
};

void merge(string& balls) {
    int pos = balls.size() - 1;
    bool kill = false;

    while (pos >= 0) {
        if (balls[pos] == '1') {
            if (kill) {
                balls[pos] = '0';
            }
            kill = true;
        } else {
            kill = false;
        }
        pos--;
    }
}

int getLowest(vector<marble>& order){
    int lowest = -1;
    int index = -1;

    for(int i=0; i<order.size(); i++){
        if(lowest == -1){
            lowest = order[i].length;
            index = i;
        }
        else if(lowest > order[i].length){
            lowest = order[i].length;
            index = i;
        }
    }

    return index;
}

int question(){

    cin >> n >> k;

    string balls;
    cin >> balls;

    vector<marble> order(n);

    merge(balls);

    int j = 0;
    int last = -1;
    for(int i=0; i<n; i++){
        if(balls[i] == '1'){
            if(last == -1){
                last = i;
            }
            else {
                order.resize(j+1);
                //cout << last << " " << i-last-1 << " " << i << endl;
                order[j] = marble{i-last-1, last, i};
                last = i;
                j++;
            }
        }
    }

    while(k > 0){
        int lowest = getLowest(order);
        auto& lowestMar = order[lowest];
        for(int i=lowestMar.i1+1; i<lowestMar.i2; i++){
            if(k > 0){
                balls[i] = '1';
                k--;
            } else {
                break;
            }
        }
        order.erase(order.begin()+lowest);
        merge(balls);
    }
    int count = 0;
    for(int i=0; i<balls.size(); i++){
        if(balls[i] == '1'){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}



int main1(){
    question();
    return 0;
}
#endif