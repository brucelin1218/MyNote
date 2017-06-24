#include <iostream>
#include <string>
using namespace std;

void reverse(char* s) {
    int n = strlen(s);
    for (int i=0; i<n/2; i++)
        swap(s[i], s[n-1-i]);
}

int main() {
    char text[20] = "My name is Bruce.";
    
    reverse(text);
    
    for(int i=0; text[i]; i++)
        cout << text[i];
    cout << "\n";
    return 0;
}

/*
output:
.ecurB si eman yM
*/
