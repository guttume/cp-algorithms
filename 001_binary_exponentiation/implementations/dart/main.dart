int binExp(int a, int b) {
  var result = 1;
  while (b > 0) {
    if (b % 2 != 0) result *= a;
    a *= a;
    b ~/= 2;
  }
  return result;
}

void main() {
  print(binExp(3, 22));
}
