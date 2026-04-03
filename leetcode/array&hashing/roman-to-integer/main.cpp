class Solution
{
public:
    static const unordered_map<char, int> map;

    int romanToInt(string s)
    {
        int sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            sum += map.at(s[i]);
            if (i > 0 && map.at(s[i]) > map.at(s[i - 1]))
            {
                sum -= 2 * map.at(s[i - 1]);
            }
        }
        return sum;
    }
};

const unordered_map<char, int> Solution::map = {
    {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};