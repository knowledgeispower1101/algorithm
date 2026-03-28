#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int current = 0;
    int freePolices = 0, crimes = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current == -1 && freePolices > 0)
        {
            freePolices--;
        }
        else if (current == -1 && freePolices == 0)
        {
            crimes++;
        }
        else if (current > 0)
        {
            freePolices += current;
        }
    }
    cout << crimes << endl;
    return 0;
}