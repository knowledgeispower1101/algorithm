#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;
    while (t-- > 0)
    {
        cin >> a >> b;
        cout << (b - a) << endl;
    }

    return 0;
}