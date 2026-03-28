#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ticket;
    for (int i = 0; i < n; i++)
    {
        cin >> ticket;
        cout << (((ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0')) == ((ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0')) ? "YES" : "NO") << endl;
    }
    return 0;
}