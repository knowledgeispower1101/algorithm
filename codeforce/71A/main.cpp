#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int size;
    cin >> size;

    vector<string> str(size);
    for (int i = 0; i < size; i++)
    {
        cin >> str[i];
    }
    for (string s : str)
    {
        if (s.size() <= 10)
        {
            cout << s << endl;
            continue;
        }
        cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    }

    return 0;
}