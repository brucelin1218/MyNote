#include <iostream>
using namespace std;

int main() {
    // Initialize the array
    char array[5][5];
    
    // Fill the blanks in
    for (int i=0; i<5; i++)
        for (int j=0; j<5; j++)
            array[i][j] = ' ';
    
    // It is okay to dublicate the four corners
    for (int i=0; i<5; i++) array[0][i] = '@';
    for (int i=0; i<5; i++) array[4][i] = '@';
    for (int i=0; i<5; i++) array[i][0] = '@';
    for (int i=0; i<5; i++) array[i][4] = '@';
    
    // Print the square border
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
            cout << array[i][j];
        cout << '\n';
    }
    
    return 0;
}
