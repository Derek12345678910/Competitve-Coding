// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

vector<char> music = {'A', 'B', 'C', 'D', 'E'};

void outputval(){
    cout << endl;
    for(int i=0; i<music.size(); i++){
        cout << music[i] << " ";
    }
}

int button1(){
    char value = music[0];
    music.erase(music.begin()+0);
    music.emplace_back(value);
    return 0;
}

int question(){

    bool running = true;

    while(running){
        int input, times; cin >> input >> times;
        for(int i=0; i<times; i++){
            if(input == 4){
                running = false;
                break;
            }
            else if(input == 3){
                char value1 = music[0];
                char value2 = music[1];
                music[0] = value2;
                music[1] = value1;
            }
            else if(input == 2){
                char value = music[4];
                music.erase(music.end()-1);
                music.emplace(music.begin()+0, value);
            }
            else if(input == 1){
                button1();
            }
        }
    }
    /*
    2
    1
    3
    1
    2
    3
    4
    1
    */

    outputval();

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif