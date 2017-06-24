// This program finds the starting position of the matching string.

#include <iostream>
using namespace std;

int main() {
  char text[15] = "It's a pencil.";
  char pattern[6] = "a pen";
        
  for (int i=0; i<14; i++) {
    bool match = true;
    for (int j=0; j<5; j++) {
      if (text[i+j] != pattern[j])
        match = false;
    }

    if (match)
      cout << "The starting index of the matching string is at: " << i << "\n";
  }
  
  return 0;
}

/*
A better way to refactor the above code
Since the matching string is definitely shorter than the text string,
we can reduce the loop size to a more accurate level.

char text[15] = "It's a pencil.";
  char pattern[6] = "a pen";
        
  for (int i=0; i<14-6+1; i++) { // a more accurate size
    bool match = true;
    for (int j=0; j<5; j++) {
      if (text[i+j] != pattern[j])
        match = false;
    }

    if (match)
      cout << "The starting index of the matching string is at: " << i << "\n";
  }
*/
