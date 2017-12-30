// Create the 2D array
int** M = new int*[n]       // Allocate an array of row pointers
for (int i = 0; i < n; i++)
  M[i] = new int[m];        // Allocate the i-th row
  
// Delete the 2D array
for (int i = 0; i < n; i++)
  delete[] M[i];            // Delete the i-th row
delete[] M;                 // Delete the array of row pointers
