// A fast way to return the actual array size by only incrementing one single variable.

#include <cstdio>
using namespace std;

int main() {
    int arr[100], a, n = 0;
    
    while(scanf("%d", &a) != EOF) { // the program stops if the input is 0
        arr[n++] = a;
    }
    
    printf("The size of array is: %d\n", n);
    return 0;
}
