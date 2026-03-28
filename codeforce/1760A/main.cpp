#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        // cout << a << " " << b << " " << c << endl;
        if ((a > b && a < c) || (a > c && a < b))
        {
            cout << a << endl;
            continue;
        }
        if ((b > a && b < c) || (b > c && b < a))
        {
            cout << b << endl;
            continue;
        }
        if ((c > a && c < b) || (c > b && c < a))
        {
            cout << c << endl;
            continue;
        }
    }
    return 0;
}