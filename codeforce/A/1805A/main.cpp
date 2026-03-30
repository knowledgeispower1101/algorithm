#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b >= 10 || b + c >= 10 || c + a >= 10)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}