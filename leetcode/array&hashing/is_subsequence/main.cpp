#include <iostream>
using namespace std;
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (t.size() < s.size())
            return false;
        int pointerS = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == s[pointerS])
            {
                pointerS++;
            }
        }
        return pointerS == s.size();
    }
};
int main()
{
    Solution so;
    string s = "abc";
    string t = "ahbgdc";
    cout << (so.isSubsequence(s, t) ? "YES" : "NO") << endl;
    return 0;
}