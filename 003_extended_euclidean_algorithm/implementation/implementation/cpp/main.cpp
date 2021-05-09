#include <iostream>
#include <tuple>

int eea(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1 = 0, y1 = 0;
    int d = eea(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int eeai(int a, int b, int &w, int &v)
{
    w = 1, v = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1)
    {
        int q = a1 / b1;
        std::tie(w, x1) = std::make_tuple(x1, w - q * x1);
        std::tie(v, y1) = std::make_tuple(y1, v - q * y1);
        std::tie(a1, b1) = std::make_tuple(b1, a1 - q * b1);
    }
    return a1;
}

int main()
{
    int x, y, w, v;
    int a = 1914;
    int b = 899;

    int gcdi = eeai(a, b, x, y);
    int gcd = eea(a, b, w, v);
    std::cout << x << ", " << y << ", " << gcd << std::endl;
    std::cout << w << ", " << v << ", " << gcdi << std::endl;
    return 0;
}
