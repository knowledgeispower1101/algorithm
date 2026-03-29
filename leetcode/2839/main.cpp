#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    bool canBeEqual(string s1, string s2)
    {
        for (int i = 0; i < s1.size() - 2; i++)
        {
            if (s1[i] == s2[i])
                continue;
            if ((s1[i] != s2[i + 2]) || (s2[i] != s1[i + 2]))
            {
                return false;
            }
        }
        for (int i = s1.size() - 2; i < s1.size(); i++)
        {
            if (s1[i] == s2[i])
                continue;
            if ((s1[i] != s2[i - 2]) || (s2[i] != s1[i - 2]))
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    cout << (s.canBeEqual("abcd", "abcd") ? "YES" : "NO)") << endl;
    return 0;
}