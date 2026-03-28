#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string pattern1, pattern2, pattern3;
    for (int i = 0; i < m; i++)
    {
        pattern1 += '#';
        if (i != m - 1)
        {
            pattern2 += '.';
        }
        else
        {
            pattern2 += '#';
        }
        if (n > 3)
        {
            if (i == 0)
            {
                pattern3 += '#';
            }
            else
            {
                pattern3 += '.';
            }
        }
    }
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << pattern1 << endl;
            continue;
        }
        if (i % 2 != 0 && count % 2 != 0)
        {
            cout << pattern2 << endl;
            count++;
            continue;
        }
        cout << pattern3 << endl;
        count = 1;
    }
    return 0;
}