#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    int threeSumCloset(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int closet = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int total = nums[i] + nums[left] + nums[right];
                if (abs(target - total) < abs(target - closet))
                {
                    closet = total;
                }
                if (total == target)
                    return target;
                if (total > target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return closet;
    }
};

int main()
{
    Solution so;
    vector<int> arr = {-1, 2, 1, -4};
    cout << so.threeSumCloset(arr, 1) << endl;
    return 0;
}