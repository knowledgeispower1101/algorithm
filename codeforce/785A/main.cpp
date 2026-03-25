#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    string temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == "Tetrahedron")
        {
            result += 4;
        }
        else if (temp == "Cube")
        {
            result += 6;
        }
        else if (temp == "Octahedron")
        {
            result += 8;
        }
        else if (temp == "Dodecahedron")
        {
            result += 12;
        }
        else if (temp == "Icosahedron")
        {
            result += 20;
        }
    }
    cout << result << endl;
    return 0;
}