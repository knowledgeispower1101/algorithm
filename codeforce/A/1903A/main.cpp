#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (k >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            // k == 1 → check manually
            bool ok = true;
            for (int i = 1; i < n; i++)
            {
                if (a[i] < a[i - 1])
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}