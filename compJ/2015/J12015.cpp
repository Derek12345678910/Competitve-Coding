// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

int question(){

    int month, date; cin >> month >> date;

    int n = 2, o = 18;

    if(month > n){
        cout << "After";
    } 
    else if(month < n){
        cout << "Before";
    }
    else if(month == n){
        if(date == o){
            cout << "Special";
        }
        else if(date > o){
            cout << "After";
        }
        else if(date < o){
            cout << "Before";
        }
    }

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif