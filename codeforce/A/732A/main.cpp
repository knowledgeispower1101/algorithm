#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int size;
        cin >> size;

        vector<int> arr(size);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        if (size == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        sort(arr.begin(), arr.end());

        bool flag = true;
        for (int i = size - 1; i >= 1; i--)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}