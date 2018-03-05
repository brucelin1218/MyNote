int numSetBits(unsigned int A) {
  int count = 0;
  while (A) {
    count += (A%2 == 0 ? 0: 1);
    A/=2;
  }
  
  return count;
}
