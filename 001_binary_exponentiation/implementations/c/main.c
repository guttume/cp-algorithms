#include <stdio.h>

long long binExp(int a, int b)
{
    long long result = 1;
    while (b > 0)
    {
        if (b % 2 != 0)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

int main()
{
    printf("%ld\n", binExp(3, 9));
    return 0;
}