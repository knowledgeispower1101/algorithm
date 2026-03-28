#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (b + c == a + c)
        {
            cout << c << endl;
        }
        else if (a + c == a + b)
        {
            cout << a << endl;
        }
        else if (a + b == b + c)
        {
            cout << b << endl;
        }
    }
    return 0;
}