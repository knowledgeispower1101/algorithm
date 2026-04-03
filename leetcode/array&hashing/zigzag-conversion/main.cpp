#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<string> arr(numRows);
        int index = 1, current = 0;
        for (int i = 0; i < s.size(); i++)
        {
            arr[current] += s[i];
            if (current == numRows - 1)
                index = -1;
            if (current == 0)
                index = 1;
            current = current + index;
        }
        string result;
        for (int i = 0; i < numRows; i++)
        {
            result += arr[i];
        }
        return result;
    }
};
int main()
{
    string s = "GOOGLEISHIRING";
    int numRows = 4;
    Solution so;
    cout << so.convert(s, numRows) << endl;
    return 0;
}