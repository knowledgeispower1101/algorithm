#include <string>
#include <iostream>
#include <cctype>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            while (left < right && !alphaNum(s[left]))
                left++;
            while (left < right && !alphaNum(s[right]))
                right--;
            if (left < right &&
                tolower(static_cast<unsigned char>(s[left])) !=
                    tolower(static_cast<unsigned char>(s[right])))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

private:
    bool alphaNum(char c)
    {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};

int main()
{
    Solution s;
    string a = "tab a cat";
    cout << s.isPalindrome(a) << endl;
    return 0;
}