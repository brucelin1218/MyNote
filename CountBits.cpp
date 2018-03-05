short CountBits(unsigned int x) {
  short num_bits = 0;
  while (x) {
    num_bits += x & 1; // num_bits = num_bits & 1; bitwise AND to the least significant digit
    x >>= 1;           // x = x >> 1; x right shift 1 bit
  }
  
  return num_bits;
}
