#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int result = 0;
    int time_for_hw = 0;
    for (int i = 1; i <= n; i++)
    {
        time_for_hw += 5 * i;
        if (k + time_for_hw <= 240)
        {
            result = i;
        }
        else
        {
            break;
        }
    }
    cout << result << endl;
    return 0;
}