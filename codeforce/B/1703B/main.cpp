#include <iostream>
using namespace std;
int main()
{
    int t, size;
    string s;
    cin >> t;
    while (t-- > 0)
    {
        int arr[26] = {0};
        cin >> size;
        cin >> s;
        int score = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int index = s[i] - 'A';
            if (arr[index] == 0)
            {
                score += 2;
            }
            else
            {
                score += 1;
            }
            arr[index]++;
        }
        cout << score << endl;
    }

    return 0;
}