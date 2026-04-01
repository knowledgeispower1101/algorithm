#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        vector<int> result(arr.size());
        int max = -1;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            result[i] = max;
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return result;
    }
};

int main()
{
    Solution so;
    vector<int> arr = {2, 4, 5, 3, 1, 2};
    vector<int> result = so.replaceElements(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}