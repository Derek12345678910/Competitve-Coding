// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    int n; cin >> n;
    vector<int> in1(n);
    vector<int> in2(n);

    for(int i=0; i<n; i++)cin >> in1[i];
    for(int i=0; i<n; i++)cin >> in2[i];

    vector<pair<int, int>> seg(0);

    vector<int> used(0);

    // group in segments
    bool segment = false;
    int segindex = 0;
    for(int i=0; i<n; i++){
        if(in2[i] != in2[i-1]){
            if(!segment){
                seg.resize(seg.size()+1);
                used.resize(used.size()+1);
                used[segindex] = in2[i];
                seg[segindex].first = i;
                segment = true;
                // end
                if(i == n-1){
                    seg[segindex].second = i;
                }
            }
            else {
                seg[segindex].second = i-1;
                segindex ++;
                i--;
                segment = false;
            }
        }
        else {
            seg[segindex].second = i;
        }
    }
    /*
    10
    1 2 3 4 5 6 7 8 9 6
    1 1 2 6 6 7 7 7 8 6

    10 
    1 3 4 2 2 2 5 4 7 8
    1 2 2 4 4 4 4 4 7 7
    */ 

    vector<bool> v1(n, false);
    vector<bool> u1(used.size(), false);
    vector<int> order(used.size());
    int k =0;
    for(int i=0; i<n; i++){
        for(int j=0; j< used.size(); j++){
            if(in1[i] == used[j] && v1[i] == false && u1[j] == false){
                //cout << in1[i] << " " << used[j] << endl;
                order[k] = in1[i];
                v1[i] = true;
                u1[j] = true;
                k++;
            }
        }
    }
    for(int i=0; i<used.size(); i++){
        //cout << order[i] << " " << in2[seg[i].first] << endl; 
        if(order[i] != in2[seg[i].first]){
            cout << "NO";
            return 0;
        }
    }

    vector<bool> v2(n, false);
    vector<bool> u2(used.size(), false);
    // if a a[i] is not in order compared to numbers then it is impossible
    for(int i=0; i<used.size(); i++){
        for(int j=0; j<n; j++){
            if(in1[j] == used[i] && v2[j] == false && u2[i] == false){
                used[i] = j;
                v2[j] = true;
                u2[i] = true;
            }
        }
    }

    // find a[i] and which type of swipe it is based off starting and end poitns
    vector<pair<int, int>> left(0);
    vector<pair<int, int>> right(0);

    int r = 0;
    int l = 0;

    for(int i=0; i<seg.size(); i++){
        // right swipe
        if(used[i] < seg[i].second){
            right.resize(right.size()+1);
            right[r].first = used[i];
            right[r].second = seg[i].second;
            r++;
        }
        //left
        if(used[i] > seg[i].first){
            left.resize(left.size()+1);
            left[l].first = seg[i].first;
            left[l].second = used[i];
            l++;
        }
    }
    cout << "YES" << "\n";
    if(in1 == in2){
        cout << 0 << "\n";
        return 0;
    }
    cout << right.size() + left.size() << "\n";

    // if left swipe go left to right
    for(int i=0; i<left.size(); i++){
        cout << "L " << left[i].first << " " << left[i].second << "\n";
    }

    // if right swipe go right to left
    for(int i=right.size()-1; i>=0; i--){
        cout << "R " << right[i].first << " " << right[i].second << "\n";
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif