#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> maxArr(size, 0);
        vector<int> minArr(size, 0);
        int current = nums[size - 1];
        minArr[size - 1] = nums[size - 1];
        for (int i = size - 1; i >= 0; i--) {
            if (nums[i] < current) {
                current = nums[i];
            }
            minArr[i] = current;
        }
        current = nums[0];
        maxArr[0] = nums[0];
        for (int i = 0; i < size; i++) {
            if (nums[i] > current) {
                current = nums[i];
            }
            maxArr[i] = current;
        }
        for (int i = 0; i < size; i++) {
            if (maxArr[i] - minArr[i] <= k) return i;
        }
        return -1;
    }
};
