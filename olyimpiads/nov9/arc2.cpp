#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

#if 0

vector<vector<long long>> matrix;

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    long long x, y; cin >> x >> y;
    matrix.resize(x, vector<long long>(y));
    long long count = 1;
    long long total = 0;
    if(y != 1){
        for(long long i=0; i<x; i++){
            for(long long j=0; j<y; j++){
                if(i%2 == 0){
                    if(count%2 == 1) matrix[i][j] = 1;
                    if(count%2 == 0) matrix[i][j] = 2;
                    if(total<2) total++;
                }   
                if(i%2 == 1){
                    if(count%2 == 1) matrix[i][j] = 3;
                    if(count%2 == 0) matrix[i][j] = 4;
                    if(total<4) total++;
                }   
                count ++ ;
            }
        }
    }
    else {
        for(long long i=0; i<x; i++){
            if(count%2 == 1) matrix[i][0] = 1;
            if(count%2 == 0) matrix[i][0] = 2;
            if(total<2) total++;
            count ++;
        }
    }
    cout << total;
    for(long long i=0; i<x; i++){
        cout << "\n";
        for(long long j=0; j<y; j++){
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif