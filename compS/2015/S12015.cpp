// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    int k; cin>>k;
    vector<int> nums(0);
    for(int i=0; i<k; i++){
        int current; cin >> current;
        if(current == 0){
            nums.erase(nums.end()-1);
        }
        else {
            nums.push_back(current);
        }
    }

    int ans = 0; 
    for(int i=0; i<nums.size(); i++){
        ans += nums[i];
    }
    cout << ans;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif