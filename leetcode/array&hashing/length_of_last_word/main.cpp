#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string &s)
    {
        int i = s.size() - 1, count = 0;
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ')
        {
            i--;
            count++;
        }
        return count;
    }
};
int main()
{
    Solution so;
    string s = "luffy is still joyboy";
    cout << so.lengthOfLastWord(s) << endl;
    return 0;
}