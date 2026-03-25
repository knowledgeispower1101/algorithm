#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string input;
    int arr[26] = {0};
    getline(cin, input);
    for (int i = 0; i < input.size(); i++)
    {
        char a = input[i];
        if (a >= 'a' && a <= 'z')
        {
            arr[a - 'a']++;
        }
    }
    int result = 0;
    for (int i = 0; i <= 25; i++)
    {
        if (arr[i] > 0)
        {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}