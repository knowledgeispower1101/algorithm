#include <iostream>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    int arr[26] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        arr[a[i] - 'A']++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        arr[b[i] - 'A']++;
    }
    for (int i = 0; i < c.size(); i++)
    {
        arr[c[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}