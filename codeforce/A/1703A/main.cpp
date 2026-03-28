#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (tolower(temp[0]) == 'y' && tolower(temp[1]) == 'e' && tolower(temp[2]) == 's')
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}