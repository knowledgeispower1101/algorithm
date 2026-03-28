#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int steps = 0;
        if (a == b)
        {
            cout << steps << endl;
            continue;
        }
        int temp = abs(a - b);
        for (int i = 10; i >= 1; i--)
        {
            if (temp / i >= 0)
            {
                steps += (temp / i);
                temp %= i;
            }
        }
        cout << steps << endl;
    }
    return 0;
}