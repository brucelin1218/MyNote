/* 
Calculate the sum of cubes with the integer input n = [0, 10]
for instance, n = 3, sum = 1^3 + 2^3 + 3^3
Using memoization to create a lookup table of each sum of n 
*/

#include <cstdio>
using namespace std;

int main() {
    // preprocessing and create the lookup table
    int cube[10 + 1]; // 0 to 10
    for (int i=1; i<=10; i++)
        cube[i] = i * i * i;
    
    int n;
    while (scanf("%d", &n) && n > 0) {
        int sum = 0;
        for (int i=1; i<=n; i++)
            sum += cube[i];
        
        printf("%d", sum);
    }
    
    return 0;
}
