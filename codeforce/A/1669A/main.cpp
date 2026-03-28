#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int temp;
    for (int i = 0; i < test_cases; i++)
    {
        cin >> temp;
        if (temp <= 1399)
        {
            cout << "Division 4" << endl;
            continue;
        }
        else if (temp >= 1400 && temp <= 1599)
        {
            cout << "Division 3" << endl;
            continue;
        }
        else if (temp >= 1600 && temp <= 1899)
        {
            cout << "Division 2" << endl;
            continue;
        }
        else
        {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}