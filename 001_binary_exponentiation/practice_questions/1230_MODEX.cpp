#include <bits/stdc++.h>
using namespace std;

int binPow(int x, int y, int z)
{
    x %= z;
    int result = 1;
    while (y)
    {
        if (y & 1)
            result = result * x % z;
        x = x * x % z;
        y >>= 1;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << binPow(x, y, z) << endl;
    }

    return 0;
}