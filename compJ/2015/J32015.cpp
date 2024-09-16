// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 0

char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

char con(char letter) {
    for (int i = 0; i < 26; ++i) {
        if (alphabet[i] == letter) {
            for (int j = i + 1; j < 26; ++j) {
                if (find(begin(vowels), end(vowels), alphabet[j]) == end(vowels)) {
                    return alphabet[j];
                }
            }
            return 'z';
        }
    }
    return letter;
}

int question(){

    string input; cin >> input;

    string output;

    for(int i=0; i<input.size(); i++){
        auto vow = find(begin(vowels), end(vowels), input[i]);
        if(vow == end(vowels)){
            auto l = find(begin(alphabet), end(alphabet), input[i]);
            output+= input[i];
            int prev = 0;
            for(int j=0, low=100000000; j<sizeof(vowels) / sizeof(vowels[0]); j++){
                auto v = find(begin(alphabet), end(alphabet), vowels[j]);
                if(abs(v-l) < low){
                    low = abs(l-v);
                    prev = j;
                }
            }
            output+= vowels[prev];
            output+= con(input[i]);
        }
        else {
            output += input[i];
        }
    }

    cout << output << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif