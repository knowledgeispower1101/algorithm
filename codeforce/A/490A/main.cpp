#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    unordered_map<int, vector<int>> map;
    int t;
    cin >> t;
    int recent;
    int min_student = 50001;
    for (int i = 0; i < t; i++)
    {
        cin >> recent;
        map[recent].push_back(i + 1);
    }
    for (int i = 1; i <= 3; i++)
    {
        min_student = min(min_student, (int)map[i].size());
    }
    if (min_student == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << min_student << endl;
    for (int i = 0; i < min_student; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << map[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}