#include <iostream>

int b_gcd(int a, int b) {
  if (!a || !b)
    return (a | b);

  int x = 0;
  while (!((a | b) & 1)) {
    a >>= 1;
    b >>= 1;
    x++;
  }

  while (!(a & 1)) {
    a >>= 1;
  }

  while (b > 0) {
    while (!(b & 1)) {
      b >>= 1;
    }
    if (a > b)
      std::swap(a, b);
    b -= a;
  }

  return a << x;
}

int b_gcd_gcc(int a, int b) {
  if (!a || !b)
    return (a | b);

  unsigned shift = __builtin_ctz(a | b);

  a >>= __builtin_ctz(a);

  do {
    b >>= __builtin_ctz(b);
    if (a > b)
      std::swap(a, b);
    b -= a;
  } while (b);

  return a << shift;
}

int b_gcd_recurs(int a, int b) {
  if (!a || !b)
    return (a | b);

  if (!(a & 1)) {
    if (b & 1)
      return b_gcd_recurs(a / 2, b);
    return b_gcd_recurs(a / 2, b / 2) * 2;
  }

  if (!(b & 1))
    return b_gcd_recurs(a, b / 2);

  if (a > b)
    return b_gcd_recurs((a - b) / 2, b);

  return b_gcd_recurs((b - a) / 2, a);
}

int main() {
  int a = 1914;
  int b = 899;

  std::cout << b_gcd(a, b) << '\n';
  std::cout << b_gcd_recurs(a, b) << '\n';
  std::cout << b_gcd_gcc(a, b) << '\n';
}