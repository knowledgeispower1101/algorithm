#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.size();
    int i = 0;
    while (i < size)
    {
        if (s[i] == '.')
        {
            cout << 0;
        }
        else if (s[i] == '-')
        {
            i++;
            if (s[i] == '.')
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
        i++;
    }
    cout << endl;
    return 0;
}