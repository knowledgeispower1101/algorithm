#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0, left = 0, right = height.size() - 1;
        while (left < right)
        {
            int minHeightLine = min(height[left], height[right]);
            maxArea = max(maxArea, minHeightLine * (right - left));
            while (left < right && height[left] <= minHeightLine)
                left++;
            while (left < right && height[right] <= minHeightLine)
                right--;
        }
        return maxArea;
    }
};

int main()
{
    vector<int> input = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution so;
    cout << so.maxArea(input) << endl;
    return 0;
}