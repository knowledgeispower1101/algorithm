#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int a, b;
    for (int i = 0; i < test_case; i++)
    {
        cin >> a >> b;
        int step = 0;
        cout << (b - a % b) % b << endl;
    }
    return 0;
}