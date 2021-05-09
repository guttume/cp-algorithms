#include <bits/stdc++.h>
using namespace std;

int get_last_three_digits(int a, int b)
{
    a = a % 1000;
    int result = 1;
    while (b)
    {
        if (b & 1)
            result = result * a % 1000;
        a = a * a % 1000;
        b = b >> 1;
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
        double x = b * log10(a);
        int first_three_digits = pow(10, (x - floor(x) + 2));
        cout << first_three_digits << "..." << get_last_three_digits(a, b) << endl;
    }

    return 0;
}