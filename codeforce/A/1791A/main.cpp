#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's')
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}