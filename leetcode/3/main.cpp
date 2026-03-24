#include <iostream>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> map;
        int left = 0, max_length = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            map[c]++;
            while (map[c] > 1)
            {
                char left_char = s[left];
                map[left_char]--;
                left++;
            }
            max_length = max(max_length, i - left + 1);
        }
        return max_length;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << s.lengthOfLongestSubstring("bbbbb") << endl;
    return 0;
}