#include <iostream>
using namespace std;

bool good(int x)
{
    return (x % 3 != 0) && (x % 10 != 3);
}

int main()
{
    int t;
    cin >> t;

    int arr[1001];
    int num = 1, idx = 1;

    while (idx <= 1000)
    {
        if (good(num))
        {
            arr[idx++] = num;
        }
        num++;
    }

    while (t--)
    {
        int k;
        cin >> k;
        cout << arr[k] << endl;
    }

    return 0;
}