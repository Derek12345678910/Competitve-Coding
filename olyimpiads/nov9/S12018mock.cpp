#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <iomanip>

using namespace std;

#if 0

int question(){

    cin.sync_with_stdio(0);
    cin.tie(0);

    int k, p, x; cin >> k >> p >> x;

    double m = sqrt(k * p / x);
    double m1 = floor(m);
    double m2 = ceil(m);

    if(m1==0) m1 = 1;
    if(m2==0) m2 = 1;
    
    double f1 = m1 * x + (k * p) / m1;
    double f2 = m2 * x + (k * p) / m2;
    
    double ans = min(f1, f2);
    cout << fixed << setprecision(3) << ans << endl; 

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif