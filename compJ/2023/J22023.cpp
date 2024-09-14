// #include '../comp.h

#include <iostream>
#include <map>

using namespace std;

#if 0

int question(){

    int n;
    cin >> n;

    map<string, int> spice = {
        {"Poblano", 1500},
        {"Mirasol", 6000},
        {"Serrano", 15500},
        {"Cayenne", 40000},
        {"Thai", 75000},
        {"Habanero", 125000}
    };

    int tspice = 0;

    for(int i=0; i<n; i++){
        string pepper;
        cin >> pepper;
        tspice = tspice + spice[pepper];
    }

    cout << tspice << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif