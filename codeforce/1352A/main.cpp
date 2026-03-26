#include <iostream>
#include <string>

using namespace std;
void process(int &input);
int main()
{
    int n;
    cin >> n;
    int input = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        process(input);
    }
}

void process(int &input)
{
    if (input / 10 == 0)
    {
        cout << 1 << endl;
        cout << input << endl;
        return;
    }
    int count = 0;
    string result;
    int base = 1;
    while (input > 0)
    {
        int temp = input % 10;

        if (temp != 0)
        {
            result += to_string(base * temp) + " ";
            count++;
        }
        input /= 10;
        base *= 10;
    }
    cout << count << endl;
    cout << result << endl;
}