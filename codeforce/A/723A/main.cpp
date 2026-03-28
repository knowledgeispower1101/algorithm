#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a >= b && a <= c))
    {
        cout << -b + c << endl;
    }
    else if (a >= c && a <= b)
    {
        cout << -c + b << endl;
    }
    else if (c >= a && c <= b)
    {
        cout << -a + b << endl;
    }
    else if (c >= b && c <= a)
    {
        cout << -b + a << endl;
    }
    else if (b >= a && b <= c)
    {
        cout << -a + c << endl;
    }
    else
    {
        cout << -c + a << endl;
    }
    return 0;
}