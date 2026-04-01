#include <iostream>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> set;
        for (int i = 0; i < nums.size(); i++)
        {
            if (set.find(nums[i]) != set.end())
                return true;
            set.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3};
    cout << (s.containsDuplicate(arr) ? "YES" : "NO") << endl;
    return 0;
}