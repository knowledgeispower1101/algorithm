#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max_height = arr[0], min_height = arr[0];
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_height)
        {
            max_height = arr[i];
            max_idx = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min_height)
        {
            min_height = arr[i];
            min_idx = i;
        }
    }

    int swaps = max_idx + (n - 1 - min_idx);
    if (max_idx > min_idx)
        swaps--;

    cout << swaps << endl;
    return 0;
}