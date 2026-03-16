#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    string c;
    int prev = 0;
    int current = -1, count = 1;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (i == 0) {
            prev = c[1] - '0';
            continue;
        }
        if (prev == c[0] - '0') {
            prev = c[1] - '0';
            count++;
        }
    }
    cout << count << endl;
    return 0;
}