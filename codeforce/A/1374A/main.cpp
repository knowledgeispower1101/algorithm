#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long x, y, n;

    while (t--)
    {
        cin >> x >> y >> n;

        long long j = x * floor((n - y) / x) + y;

        if (j > n)
            j -= x;

        cout << j << endl;
    }

    return 0;
}