#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    int max = 0, index_max = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            index_max = i;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (i != index_max)
        {
            cout << max - arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}