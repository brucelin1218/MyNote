// Gilbert-Mosteller Strategy
// Find the minimum as soon as pissible. 
// Search the first n/e elements, mark the smallest
// After the n/e + 1, if there is any smaller element, we assume that is the smallest.

int find_minimum(int array[], int n) {
    int k = floor((double)n / exp(1));
    int min = 2147483647;
    for (int i=0; i<k; i++)
        if (array[i] < min)
            min = array[i];
 
    for (int i=k; i<n; i++)
        if (array[i] < min)
            return array[i];
            
    return min;
}
