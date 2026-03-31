#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int prev = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int cur;
            cin >> cur;

            ans = max(ans, cur - prev); // khoảng cách giữa 2 trạm
            prev = cur;
        }

        ans = max(ans, (x - prev) * 2);

        cout << ans << endl;
    }

    return 0;
}