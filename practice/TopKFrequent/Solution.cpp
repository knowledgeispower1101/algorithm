#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        // count how many time each digit appear on the array
        // then group them by using the time they appear
        // create array in 2D [0:[], 1:[3,5], 2:[6,9]]
        // loop from the end to the begin and get number in the list until k == 0
        unordered_map<int, int> map;
        for (int n : nums)
        {
            map[n]++;
        }
        vector<vector<int>> buckets;
        buckets.resize(nums.size() + 1);
        for (auto &x : map)
        {
            buckets[x.second].push_back(x.first);
        }
        vector<int> result;
        for (size_t i = buckets.size() - 1; i > 0 && k > 0; i--)
        {
            if (buckets[i].size() == 0)
                continue;
            for (int n : buckets[i])
            {
                result.push_back(n);
                k--;
                if (k == 0)
                    break;
            }
        }
        return result;
    }
};