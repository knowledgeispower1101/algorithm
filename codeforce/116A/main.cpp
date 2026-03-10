#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int in, out;
    int current = 0, result = 0;
    for (int i = 0; i < n; i++) {
        cin >> out >> in;
        current += in - out;
        if (current > result) {
            result = current;
        }
    }
    cout << result << endl;
    return 0;
}