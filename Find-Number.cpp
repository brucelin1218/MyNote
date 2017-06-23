// Remember when searching for a paticular key, stops the loop once it is found to save time.

int find_number(int array[i], int n, int num) {
    for (int i=0; i<n; i++)
        if (array[i] == num)
            return i;
    return -1;
}
