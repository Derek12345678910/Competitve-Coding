// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    double n;
    cin >> n;

    vector<double> l(n+1);
    vector<double> w(n);

    for(int i=0; i<n+1; i++){
        cin >> l[i];
    }
    for(int i=0; i<n; i++){
        cin >> w[i];
    }

    double totalA = 0;

    for(int i=0; i<n; i++){
        totalA = totalA + ((w[i]*(l[i] + l[i+1]))/2);
    }

    cout.precision(9);
    cout << fixed << totalA << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif