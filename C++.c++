#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void cadena() {
    string vowel[5] = {"a", "e", "i", "o", "u"};
    char vowe[27] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 5; i++) {
            if (vowel[i]== vowe[j]) {
                cout << "t0";
                break; // Break out of the inner loop once a match is found
            }
        else{
            cout<<"l";
        }
        
    }
}

int main() {
    cadena();
    return 0;
}
