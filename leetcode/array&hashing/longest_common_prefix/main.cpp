#include <iostream>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string temp = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            while (strs[i].find(temp) != 0 && !temp.empty())
            {
                temp.pop_back();
            }
            if (temp.empty())
                return "";
        }
        return temp;
    }
};