#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}