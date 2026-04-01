#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while (t-- > 0)
    {
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << "STAIR" << endl;
            continue;
        }
        if (b > a && b > c)
        {
            cout << "PEAK" << endl;
            continue;
        }
        cout << "NONE" << endl;
    }
    return 0;
}