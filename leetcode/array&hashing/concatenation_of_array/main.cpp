#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int size = nums.size() * 2;
        vector<int> result(size);
        for (int i = 0; i < size; i++)
        {
            result[i] = nums[i % nums.size()];
        }
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<int> arr = s.getConcatenation(nums);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}