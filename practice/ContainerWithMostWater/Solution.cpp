#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, result = 0;
        while (left < right)
        {
            int area = min(height[left], height[right]) * (right - left);
            result = max(result, area);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return result;
    }
};

int main()
{
    vector<int> height = {1, 7, 2, 5, 12, 3, 500, 500, 7, 8, 4, 7, 3, 6};
    Solution sl;
    cout << sl.maxArea(&height) << endl;
}