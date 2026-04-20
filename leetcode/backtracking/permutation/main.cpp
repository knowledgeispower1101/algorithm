#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<bool> is_checked(nums.size(), false);
        vector<int> current;
        handlePermutation(result, is_checked , current, nums);
        return result;
    }
private:
    void handlePermutation(vector<vector<int>> &arr, vector<bool> &is_checked, vector<int> &current, vector<int> &nums){
        if (current.size() == nums.size()) {
            arr.push_back(current);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (is_checked[i]) continue;
            is_checked[i] = true;
            current.push_back(nums[i]);
            handlePermutation(arr, is_checked, current, nums);
            current.pop_back();
            is_checked[i] = false;
        }
    }
};