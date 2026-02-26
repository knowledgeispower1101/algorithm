#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                st.push(']');
            }
            else if (s[i] == '{')
            {
                st.push('}');
            }
            else if (s[i] == '(')
            {
                st.push(')');
            }
            else if (!st.empty() && st.top() == s[i])
            {
                st.pop();
            }
            else if (st.empty() || st.top() != s[i])
                return false;
        }
        return st.empty();
    }
};

int main()
{
    string s = "[(])";
    Solution solution;
    cout << solution.isValid(s) << endl;
    return 0;
}