#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  char str[] = "This is  a test only - just a test";
  char *token = strtok(str, " "); // Get the first token.
  
  while (token != NULL) { 
    printf("%s\n", token);
    token = strtok(NULL, " "); // Passing NULL so it keeps walking through the next token.
  }
  
  return 0;
}

// Output
This
is
a
test
only
-
just
a
test
