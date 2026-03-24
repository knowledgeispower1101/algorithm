#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end())
            {
                return vector<int>{map[target - nums[i]], i};
            }
            map[nums[i]] = i;
        }
        return vector<int>{};
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result = s.twoSum(nums, 9);
    for (int a : result)
    {
        cout << a << endl;
    }
    return 0;
}