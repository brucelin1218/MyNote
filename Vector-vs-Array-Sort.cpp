#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {9, 5, 4, 23, 1};
    vector<int> v(arr, arr+5);
    vector<int>::iterator i;
    
    printf("===== Sort with vector: =====\n");
    
    printf("\nSort by descending order:\n");
    sort(v.rbegin(), v.rend());
    for(i = v.begin(); i != v.end(); i++) {
        printf("%d ", *i);  // 23 9 5 4 1 
    }
    
    printf("\n\nSort by ascending order:\n");
    sort(v.begin(), v.end());
    for(i = v.begin(); i != v.end(); i++) {
        printf("%d ", *i);  // 1 4 5 9 23
    }
    
    printf("\n\n===== Sort with array: =====\n");
    
    sort(arr, arr+5);
    reverse(arr, arr+5);
    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]);  // 23 9 5 4 1 
    }
    
    printf("\n\nSort by ascending order:\n");
    reverse(arr, arr+5);
    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]); // 1 4 5 9 23
    }
    
    printf("\n\n===== Shuffle the content with vector: =====\n");
    random_shuffle(v.begin(), v.end());
    for (i = v.begin(); i != v.end(); i++) {
        printf("%d ", *i);  // 23 9 1 5 4
    }
    
    printf("\n\n===== Partial sort with vector: =====\n");
    partial_sort(v.begin(), v.begin()+3, v.end());
    for (i = v.begin(); i != v.end(); i++) {
        printf("%d ", *i);  // 1 4 5 23 9 
    }
    
    return 0;
}
