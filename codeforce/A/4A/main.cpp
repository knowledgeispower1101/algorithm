#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x == 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 3; i <= x; i++)
    {
        if ((x - i) % 2 == 0 && (i % 2 == 0))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}