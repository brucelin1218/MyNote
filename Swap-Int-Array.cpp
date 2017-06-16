#include <iostream>
using namespace std;

int main() {
    int a[5] = {3, 6, 9, -8, 1};
    int b[5] = {9, 8, 7, 6, 5};
    
    // one-pass
    for (int i=0; i<5; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    return 0;
}

// Compare to the way below, this way saves the memory.
/*
    int a[5] = {3, 6, 9, -8, 1};
    int b[5] = {9, 8, 7, 6, 5};
 
    // multi-pass
    int temp[5];
    for (int i=0; i<5; i++) temp[i] = a[i];
    for (int i=0; i<5; i++) a[i] = b[i];
    for (int i=0; i<5; i++) b[i] = temp[i];
    
    return 0;
*/
