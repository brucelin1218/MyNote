include <iostream>

using namespace std;

int main() {
  
  int array[5] = {0};
  
  /*
   *  &array is the address of the variable array stored (entire array)
   *  &array + 1 increment the address of array by 5(size)*4(int, bytes) = 20
   *  *(&array + 1) dereferecing the address
   */
  int size = *(&array + 1) - array; // Getting the difference between
  
  cout << "size of the array is: " << size << endl;
  
  return 0;
}
