#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string encoded;
        for (const string &str : strs)
        {
            encoded += to_string(str.size());
            encoded += '#';
            encoded += str;
        }
        return encoded;
    }

    vector<string> decode(string s)
    {
        vector<string> result;
        size_t i = 0;

        while (i < s.size())
        {
            int len = 0;

            while (s[i] >= '0' && s[i] <= '9')
            {
                len = len * 10 + (s[i] - '0');
                i++;
            }

            i++;

            result.push_back(s.substr(i, len));
            i += len;
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<string> arr = {"", "World"};

    string encoded = sol.encode(arr);
    cout << encoded << endl;

    vector<string> decoded = sol.decode(encoded);
    for (auto &s : decoded)
        cout << "[" << s << "] ";
}
