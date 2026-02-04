#include <unordered_set>
#include <iostream>

using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> set(nums.begin(), nums.end());
        int result = 0;
        int len = 0;
        for (int num : nums)
        {
            if (!set.count(num - 1))
            {
                len = 1;
                while (set.count(num + len))
                {
                    len++;
                }
            }
            result = max(result, len);
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> a = {2, 20, 4, 10, 3, 4, 5};
    cout << s.longestConsecutive(a);
    return 0;
}