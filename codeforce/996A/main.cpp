#include <iostream>
using namespace std;
int main()
{
    int money;
    cin >> money;
    int steps = 0;
    while (money > 0)
    {
        if (money >= 100)
        {
            steps += (money / 100);
            money = money % 100;
        }
        else if (money >= 20)
        {
            steps += (money / 20);
            money = money % 20;
        }
        else if (money >= 10)
        {
            steps += (money / 10);
            money = money % 10;
        }
        else if (money >= 5)
        {
            steps += (money / 5);
            money = money % 5;
        }
        else
        {
            steps += money;
            money = 0;
        }
    }
    cout << steps << endl;
    return 0;
}