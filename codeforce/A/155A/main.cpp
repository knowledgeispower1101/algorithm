#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int count = 0;
    int max_value = x, min_value = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (max_value > x)
        {
            max_value = x;
            count++;
        }
        else if (min_value < x)
        {
            min_value = x;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}