#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        int open = 0, close = 0;
        string current;
        vector<string> result;
        generate(open, close, result, n, current);
        return result;
    }

private:
    void generate(int open, int close, vector<string> &result, int &n, string &current)
    {
        if (open == n && close == n)
        {
            result.push_back(current);
            return;
        }
        if (open < n)
        {
            current.push_back('(');
            generate(open + 1, close, result, n, current);
            current.pop_back();
        }
        if (close < open)
        {
            current.push_back(')');
            generate(open, close + 1, result, n, current);
            current.pop_back();
        }
    }
};
int main()
{
    Solution so;
    vector<string> arr = so.generateParenthesis(2);
    for (auto s : arr)
    {
        cout << s << endl;
    }
    return 0;
}