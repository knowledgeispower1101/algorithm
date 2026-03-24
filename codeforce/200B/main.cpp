#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double total = 0, p;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        total += p;
    }

    cout << fixed << setprecision(10) << total / n << endl;

    return 0;
}