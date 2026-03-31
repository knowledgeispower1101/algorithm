#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int len;
        string s;
        cin >> len;
        cin >> s;
        if (len == 0)
        {
            cout << 1 << endl;
            continue;
        }
        int count = 0;
        for (int i = 0; i < (len / 2); i++)
        {
            char a = s[i];
            char b = s[len - i - 1];
            if ((a == '0' && b == '1') || (a == '1' && b == '0'))
            {
                count++;
                continue;
            }
            break;
        }
        cout << len - 2 * count << endl;
    }
    return 0;
}