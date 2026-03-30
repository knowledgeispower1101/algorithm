#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int maxVal = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }

    long long S = 0;
    for (int i = 0; i < n; i++)
    {
        S += (maxVal - a[i]);
    }

    cout << S << endl;

    return 0;
}