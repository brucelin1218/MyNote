#include <iostream>
using namespace std;

int main() {
    char s[15] = "HELLo WOrLd!";
    
    for (int i=0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cout << char(s[i] - 'A' + 'a'); // convert the ASCII value to char
        else
            cout << s[i];
    }
    cout << "\n";
    return 0;
}

// output: hello world!

