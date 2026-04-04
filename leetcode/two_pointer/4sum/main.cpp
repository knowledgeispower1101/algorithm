#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4)
            return result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right)
                {
                    long long total = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (total == target)
                    {
                        result.push_back(
                            {nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        while (left < right && nums[left] == nums[left - 1])
                        {
                            left++;
                        }
                    }
                    else if (total > target)
                    {
                        right--;
                    }
                    else
                    {
                        left++;
                    }
                }
            }
        }
        return result;
    }
};
int main()
{
    Solution so;
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = so.fourSum(arr, target);
    for (auto a : result)
    {
        for (auto num : a)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}