#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int timur = 0, result = 0;
        cin >> timur;
        int participant;
        for (int i = 0; i < 3; i++)
        {
            cin >> participant;
            if (participant > timur)
            {
                result++;
            }
        }
        cout << result << endl;
    }

    return 0;
}