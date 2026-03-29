#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        int arr[num];
        for (int j = 0; j < num; j++)
        {
            cin >> arr[j];
        }
        if (num == 1)
        {
            cout << (arr[0] == 0 ? 1 : 0) << endl;
            continue;
        }
        int left = 0, max = 0;
        for (int j = 0; j < num; j++)
        {
            if (arr[j] == 1)
            {
                left = j + 1;
                continue;
            }

            if (j - left + 1 > max)
            {
                max = j - left + 1;
            }
        }
        cout << max << endl;
    }
    return 0;
}