#include <iostream>
using namespace std;
int main() {
    int n,h;
    cin >> n >> h;
    int stHeight = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> stHeight;
        if (stHeight > h) {
            count += 2;
            continue;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}