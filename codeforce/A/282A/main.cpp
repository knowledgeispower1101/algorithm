#include <iostream>
using namespace std;
int main() {
    int steps;
    int result = 0;
    cin >> steps;
    string str;
    for (int i = 0; i < steps; i++) {
        cin >> str;
        if (str[0] == '+') {
            ++result;
            continue;
        }
        if (str[2] == '+') {
            result++;
            continue;
        }
        if (str[0] == '-') {
            --result;
            continue;
        }
        if (str[2] == '-') {
            result--;
            continue;
        }
    }
    cout << result << endl;
    return 0;
}