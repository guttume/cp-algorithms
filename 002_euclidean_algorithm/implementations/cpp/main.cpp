#include <iostream>

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        std::swap(a, b);
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
    std::cout << gcd(120, 140) << std::endl;
    std::cout << gcd_recurs(120, 140) << std::endl;

    return 0;
}