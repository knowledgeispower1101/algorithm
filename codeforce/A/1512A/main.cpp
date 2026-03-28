#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        int a[size];
        int first = 0;
        for (int j = 0; j < size; j++)
        {
            cin >> a[j];
        }
        int common;
        if (a[0] == a[1])
        {
            common = a[0];
        }
        else
        {
            if (a[0] == a[2])
                common = a[0];
            else
                common = a[1];
        }
        for (int j = 0; j < size; j++)
        {
            if (a[j] != common)
            {
                cout << j + 1 << endl;
                break;
            }
        }
    }
    return 0;
}