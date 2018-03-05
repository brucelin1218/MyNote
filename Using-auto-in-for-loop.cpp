// Practice with using "auto" in a for loop

#include <vector>
using namespace std;

int main() {
    int array[10] = { 1, 3, 4, 10, 11, 10, 23, 99, 123, 514 };
    vector<int> v = {100, 99, 97, 98, 50};
    
    for(auto i: array) {
        printf("%d ", i);
    }
    printf("\n");
    
    for(auto i: v) {
        printf("%d ", i);
    }
    
    return 0;
}

// output:
// 1 3 4 10 11 10 23 99 123 514 
// 100 99 97 98 50
