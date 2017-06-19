// We can create the lookup talbe by hash table or binary search tree when 
// there apears a huge number.

#include <iostream>
#include <map>
using namespace std;

int main() {
    int array[10] = { 1, 3, 4, 10, 11,
                      1000000000, 23, 99, 123, 514 };
                      
    // Instead of creating a huge array, we use map
    //  int c[1000000000] = {};
    map<int, int> c;    // binary search tree
    
    // count the frequency
    for (int i=0; i<10; i++)
        c[array[i]]++;
    
    // print the result
    for (auto i: c)
        cout << i.first << ':' << i.second << '\n';
    
    return 0;
}

/* 
Output:
1:1
3:1
4:1
10:1
11:1
23:1
99:1
123:1
514:1
1000000000:1
*/
