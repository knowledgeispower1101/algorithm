#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int current;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        cout << (current / 10) + (current % 10) << endl;
    }
    return 0;
}