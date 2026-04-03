#include <iostream>

using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        int index = 0, sign = 1, result = 0;
        // remove all space ahead
        while (s[index] == ' ')
        {
            index++;
        }
        if (s[index] == '-')
        {
            sign = -1;
            index++;
        }
        else if (s[index] == '+')
        {
            index++;
        }
        while (s[index] >= '0' && s[index] <= '9')
        {
            int digit = s[index] - '0';
            if (result > ((INT_MAX - digit) / 10))
            {
                return sign > 0 ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
            index++;
        }
        return sign == 1 ? result : result * -1;
    }
};
int main()
{
    Solution so;
    cout << so.myAtoi("42") << endl;
    return 0;
}