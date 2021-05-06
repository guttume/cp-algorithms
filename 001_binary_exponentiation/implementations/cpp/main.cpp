#include <iostream>

using namespace std;

long long binPow(int a, int n)
{
    long long result = 1;
    while (n > 0)
    {
        if (n & 1)
            result *= a;
        a *= a;
        n >>= 1;
    }
    return result;
}

long long binPowRecurs(int a, int n)
{
    if (n == 0)
        return 1;
    long long temp = binPowRecurs(a, n / 2);
    long long result = temp * temp;
    if (n & 1)
        result *= a;
    return result;
}

int main()
{
    cout << binPow(3, 22) << endl;
    cout << binPowRecurs(3, 22) << endl;
    return 0;
}