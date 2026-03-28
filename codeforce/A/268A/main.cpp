#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<int> home(n), guest(n);
    int map[101] = {0};
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> guest[i];
        map[home[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        result += map[guest[i]];
    }
    cout << result << endl;
    return 0;
}