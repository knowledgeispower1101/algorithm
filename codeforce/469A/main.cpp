#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> arr(n + 1, false);
    for (int i = 0; i < 2; i++)
    {
        int len = 0;
        cin >> len;
        int pass_level;
        for (int j = 0; j < len; j++)
        {
            cin >> pass_level;
            arr[pass_level] = true;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!arr[i])
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}