// The idea is to use memoization to create a loopup table.

#include <iostream>
using namespace std;

int main() {
    char s[100] = "My name is Bruce I love coffee and write code";
    int c[26] = {}; // A table to record the frequency of each letter 
    
    // convert to lowercase
    for (int i=0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    
    // count letter frequency
    for (int i=0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            c[s[i] - 'a']++;
    }
    
    // print the result
    for (int i=0; i<26; i++)
        cout << char('a'+i) << ':' << c[i] << '\n';
    
    return 0;
}
