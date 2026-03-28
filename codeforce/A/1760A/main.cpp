#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int middle = a + b + c - max({a, b, c}) - min({a, b, c});

        cout << middle << endl;
    }
    return 0;
}