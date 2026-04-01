#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int k = n / 2;

        if (k % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        int sum_even = 0;
        for (int i = 1; i <= k; i++)
        {
            cout << 2 * i << " ";
            sum_even += 2 * i;
        }

        int sum_odd = 0;
        for (int i = 1; i < k; i++)
        {
            cout << 2 * i - 1 << " ";
            sum_odd += 2 * i - 1;
        }

        cout << sum_even - sum_odd << "\n";
    }

    return 0;
}