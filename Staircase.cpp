/*
* Consider a staircase of size : 4
*
*       #
*      ##
*     ###
*    ####
*
* Size: 6 
*
*      #
*     ##
*    ###
*   ####
*  #####
* ######
*
*/

#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  char arr[N][N];
  // Fill up the 2D array with space.
  for (int i=0; i<N; i++)
    for (int j=0; j<N; j++)
      arr[i][j] = ' ';
  // Use for counting index
  int cnt = 1;
  
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      // When j == N-cnt, that is the start to print '#' 
      if (j == N-cnt) {
        int m = j;
        while (m<N) {
          cout << '#';
          m++;
        }
      }
      // else print out the space
      cout << arr[i][j];
    }
    cout << endl;
    cnt++;
  }
  
  return 0;
}
