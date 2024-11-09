// #include '../comp.h

#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<int> primes(2000001, -1);

bool findprime(int num, int div){
    if(primes[num] == 1){
        return true;
    }
    else if(primes[num] == 2){
        return false;
    }
    if(div * div > num){
        primes[num] = 1;
        return true;
    }
    if(num % div == 0){
        primes[num] = 2;
        return false;
    }
    return findprime(num, div+1);
}

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    for(int i=0; i<n; i++){
        int num; cin >> num;
        for(int j=2; j<num+1; j++){
            if(findprime(num*2-j, 2) && findprime(j, 2)){
                cout << "\n" << j << " " << num*2-j;
                break;
            }
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif