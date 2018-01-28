/**
  This simple program tokenizes a string and stores the tokens into a char* ptr1 array,
  Then copy the string from ptr1[i] into ptr2[i].
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  char str[] = "This is  a test only - just a test";
  char *ptr1[100] = {};
  char *ptr2[100] = {};
  int index1 = 0, index2 = 0;
  char *token = strtok(str, " "); // Get the first token.
  
  while (token != NULL) { 
    ptr[index1] = token;
    ptr2[index2] = malloc(sizeof(token)); // Memory allocation for the strcpy().
    printf("%ld\n", &ptr1[index1]); // Print the address of pointers.
    printf("%s\n", ptr2[index2]); // Print the content of the pointers.
    free(ptr2[index2]); // Free ptr2[index2] memory 
    index1++;
    index2++;
    token = strtok(NULL, " "); // Passing NULL so it keeps walking through the next token.
  }
  
  return 0;
}

// Output
// 140732920754784
// This
// 140732920754792
// is
// 140732920754800
// a
// 140732920754808
// test
// 140732920754816
// only
// 140732920754824
// -
// 140732920754832
// just
// 140732920754840
// a
// 140732920754848
// test
