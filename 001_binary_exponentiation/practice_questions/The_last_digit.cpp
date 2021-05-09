#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    a %= 10;
    int result = 1;
    while (b)
    {
        if (b & 1)
            result = result * a % 10;

        a = a * a % 10;
        b >>= 1;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << gcd(a, b) << endl;
    }

    return 0;
}