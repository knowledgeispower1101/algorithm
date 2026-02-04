#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            while (left < right && numbers[left] + numbers[right] > target)
            {
                right--;
            }
            while (left < right && numbers[left] + numbers[right] < target)
            {
                left++;
            }
            if (numbers[left] + numbers[right] == target)
                break;
        }
        vector<int> result = {left + 1, right + 1};
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 3, 4, 5};
    int target = 3;

    vector<int> result = s.twoSum(a, target);

    if (!result.empty())
    {
        cout << "Index 1: " << result[0] << endl;
        cout << "Index 2: " << result[1] << endl;
    }
    else
    {
        cout << "No solution found" << endl;
    }

    return 0;
}
