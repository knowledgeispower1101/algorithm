#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t-- > 0)
    {
        cin >> s;
        string result;
        if (s.size() <= 2)
        {
            cout << s << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (i < 2)
            {
                s += s[i];
                continue;
            }
            if (i % 2 != 0)
            {
                result += s[i];
            }
        }
        cout << result << endl;
    }
    return 0;
}