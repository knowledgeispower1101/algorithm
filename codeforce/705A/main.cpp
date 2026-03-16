#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int track = 1;
    if (n == 1) {
        cout << "I hate it" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (track == 1) {
            cout << "I hate";
            track++;
        } else {
            cout << "I love";
            track = 1;
        }
        if (i != n - 1) {
            cout << " that ";
        }
    }
    cout << " it" << endl;
    return 0;
}