#include <iostream>
using namespace std;
int main() {
    string first, second;
    cin >> first >> second;
    string result = "";
    for (int i = 0; i < first.size(); i++) {
        if (first[i] != second[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }
    cout << result << endl;
    return 0;
}