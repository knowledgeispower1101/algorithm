#include <unordered_map>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;
        vector<string> cp = strs;
        for (int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            map[s].push_back(cp[i]);
        }
        for (auto x : map)
        {
            result.push_back(x.second);
        }
        return result;
    }
};

// space complexity O(n) -> n is size of vector
// time complexity O(n * mlogm) -> m is the length of the largest size of vector