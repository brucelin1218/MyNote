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
        printf("%d ", *i);
    }
    
    printf("\n\nSort by ascending order:\n");
    sort(v.begin(), v.end());
    for(i = v.begin(); i != v.end(); i++) {
        printf("%d ", *i);
    }
    
    printf("\n\n===== Sort with array: =====\n");
    
    sort(arr, arr+5);
    reverse(arr, arr+5);
    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\nSort by ascending order:\n");
    reverse(arr, arr+5);
    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n===== Shuffle the content with vector: =====\n");
    random_shuffle(v.begin(), v.end());
    for (i = v.begin(); i != v.end(); i++) {
        printf("%d ", *i);
    }
    
    printf("\n\n===== Partial sort with vector: =====\n");
    partial_sort(v.begin(), v.begin()+3, v.end());
    for (i = v.begin(); i != v.end(); i++) {
        printf("%d ", *i);
    }
    
    return 0;
}
