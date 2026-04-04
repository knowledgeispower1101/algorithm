#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static vector<string> phoneNumber;
    vector<string> letterCombinations(string digits)
    {
        vector<string> result;
        if (digits.size() == 0)
            return result;
        string current;
        buildString(digits, 0, result, current);
        return result;
    }

private:
    void buildString(string &a, int position, vector<string> &result, string &current)
    {
        if (position == a.size())
        {
            result.push_back(current);
            return;
        }
        string s = phoneNumber.at(a[position] - '0');
        for (int i = 0; i < s.size(); i++)
        {
            current.push_back(s[i]);
            buildString(a, position + 1, result, current);
            current.pop_back();
        }
    }
};

vector<string> Solution::phoneNumber = {
    "",
    "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"};

int main()
{
    Solution so;
    vector<string> arr = so.letterCombinations("234");
    for (auto s : arr)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}