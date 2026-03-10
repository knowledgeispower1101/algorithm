#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int answer;
    int result = 0;
    for (int i = 0; i < n; i++) {
        cin >> answer;
        if (answer == 1) {
            cout << "HARD" << endl;
            return 0;
        } 
    }
    cout << "EASY" << endl;
    return 0;
}