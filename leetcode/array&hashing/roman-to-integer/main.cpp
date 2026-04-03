#include <iostream>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;
        static const unordered_map<char, int> map = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < s.size(); i++)
        {
            result += map.at(s[i]);
            if (i > 0 && map.at(s[i]) > map.at(s[i - 1]))
            {
                result -= 2 * map.at(s[i - 1]);
            }
        }
        return result;
    }
};
int main()
{
    Solution so;
    cout << so.romanToInt("III") << endl;
}