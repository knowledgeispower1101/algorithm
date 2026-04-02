#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int start = 0, len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int oddLen = expand(s, i, i);
            int evenLen = expand(s, i, i + 1);
            int current = max(oddLen, evenLen);
            if (current > len)
            {
                len = current;
                start = i - (current - 1) / 2; // max - 1 / 2 eleminate a center point and then calculate the radius
            }
        }
        return s.substr(start, len);
    }

private:
    int expand(string &s, int left, int right)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return right - left - 1;
    }
};
int main()
{
    Solution so;
    cout << so.longestPalindrome("abba") << endl;
}