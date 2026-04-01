#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int score = 0;
        vector<string> grid(10);
        for (int i = 0; i < 10; i++)
        {
            cin >> grid[i];
        }
        for (int row = 0; row < 10; row++)
        {
            for (int col = 0; col < 10; col++)
            {
                if (grid[row][col] == '.')
                    continue;
                if (row == 0 || col == 0 || row == 9 || col == 9)
                {
                    score += 1;
                    continue;
                }
                if (row > 0 && col > 0 && (row == 1 || col == 1 || row == 8 || col == 8))
                {
                    score += 2;
                    continue;
                }
                if (row > 1 && col > 1 && (row == 2 || col == 2 || row == 7 || col == 7))
                {
                    score += 3;
                    continue;
                }
                if (row > 2 && col > 2 && (row == 3 || col == 3 || row == 6 || col == 6))
                {
                    score += 4;
                    continue;
                }
                score += 5;
            }
        }
        cout << score << endl;
    }
    return 0;
}