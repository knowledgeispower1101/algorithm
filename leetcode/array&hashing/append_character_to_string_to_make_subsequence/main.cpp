#include <iostream>
using namespace std;
class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int indexS = 0, theSame = 0;
        for (int i = 0; i < t.size(); i++)
        {
            while (t[i] != s[indexS] && indexS < s.size())
            {
                indexS++;
            }
            if (indexS == s.size())
                break;
            indexS++;
            theSame++;
        }
        return t.size() - theSame;
    }
};

int main()
{
    string s = "coaching";
    string t = "coding";
    Solution so;
    cout << so.appendCharacters(s, t) << endl;
    return 0;
}