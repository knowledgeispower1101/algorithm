#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    int mikasa_score = 0;
    while (t-- > 0)
    {
        cin >> a >> b;
        if (a > b)
        {
            mikasa_score++;
        }
        else if (a < b)
        {
            mikasa_score--;
        }
    }
    if (mikasa_score == 0)
    {
        cout << "Friendship is magic!^^" << endl;
        return 0;
    }
    if (mikasa_score < 0)
    {
        cout << "Chris" << endl;
        return 0;
    }
    cout << "Mishka" << endl;
    return 0;
}