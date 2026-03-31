#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        bool flagT = false, flagi = false, flagm = false, flagu = false, flagr = false;
        int len;
        string s;
        cin >> len;
        cin >> s;
        if (len != 5)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'T')
            {
                flagT = true;
                continue;
            }
            if (s[i] == 'i')
            {
                flagi = true;
                continue;
            }
            if (s[i] == 'm')
            {
                flagm = true;
                continue;
            }
            if (s[i] == 'u')
            {
                flagu = true;
                continue;
            }

            if (s[i] == 'r')
            {
                flagr = true;
                continue;
            }
        }
        cout << (flagT && flagi && flagm && flagu && flagr ? "YES" : "NO") << endl;
    }

    return 0;
}