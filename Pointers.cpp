#include <iostream>
using namespace std;

int main () {
  int a = 1, b = 2;
  int *ptr1;
  int *ptr2;

  ptr1 = &a;      // ptr1 = address of firstvalue
  ptr2 = &b;      // ptr2 = address of secondvalue
  *ptr1 = 10;     // value pointed to by ptr1, 10
  *ptr2 = *ptr1;  // value pointed to by ptr2 = value pointed to by ptr1
  ptr1 = ptr2;    // ptr1 = ptr2 (value of pointer is copied)
  *ptr1 = 20;     // value pointed to by p1, 20
  
  cout << "the value of a is " << a << '\n'; // 10
  cout << "the value of b is " << b << '\n'; // 20
  
  return 0;
}
