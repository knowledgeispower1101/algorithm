#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int arr[26] = {0};
    string s;
    int size;
    cin >> size;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int index = tolower(s[i]) - 'a';
        arr[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}