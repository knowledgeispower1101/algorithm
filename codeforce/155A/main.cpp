#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;

    int minScore = x, maxScore = x;
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> x;

        if (x > maxScore)
        {
            count++;
            maxScore = x;
        }
        else if (x < minScore)
        {
            count++;
            minScore = x;
        }
    }

    cout << count << endl;
    return 0;
}