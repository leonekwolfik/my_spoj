//
//  AL_20_01.cpp
//  my_spoj
//
//  Created by Bartosz Wilk on 31/07/2022.
//

#include "AL_20_01.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> MORSE = {
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    ".-..",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    "..-.",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--..",
};

void printInMorse(const string & word){
    for (const auto & c : word){
        int c_pos = (int)c;
        if (c_pos == 32)
            cout << "/";
        else{
            if (c_pos < 91)
                c_pos -= 65;
            else
                c_pos -= 97;
            
            cout << MORSE[c_pos] << "/";
        }
            
    }
    cout << endl;
}

void run(){
    string word;
    while(getline(cin, word)){
        printInMorse(word);
    }
}

int main(){
    run();
    return 0;
}
