#include <stdio.h>

int gcd(int a, int b)
{
    while (b > 0)
    {
        a %= b;
        // swap both the numbers
        a += b;
        b = a - b;
        a = a - b;
    }
    return a;
}

int gcd_recurs(int a, int b)
{
    if (b == 0)
        return a;
    return gcd_recurs(b, a % b);
}

int main()
{
    int a = 120;
    int b = 140;
    printf("%d\n", gcd(a, b));
    printf("%d\n", gcd_recurs(a, b));

    return 0;
}