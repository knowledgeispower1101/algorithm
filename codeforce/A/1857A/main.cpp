#include <iostream>
using namespace std;
int main()
{
    int n, m, current;
    int total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int odd = 0, even = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> current;
            if (current % 2 == 0)
            {
                even += current;
            }
            else
            {
                odd += current;
            }
        }
        if ((even + odd) % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}