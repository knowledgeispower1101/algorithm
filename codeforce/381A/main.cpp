#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int sereja = 0, dima = 0;
    bool turnSereja = true; // Sereja starts
    int left = 0, right = n - 1;

    while (left <= right)
    {
        if (cards[left] > cards[right])
        {
            if (turnSereja)
                sereja += cards[left];
            else
                dima += cards[left];
            left++;
        }
        else
        {
            if (turnSereja)
                sereja += cards[right];
            else
                dima += cards[right];
            right--;
        }
        turnSereja = !turnSereja;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}