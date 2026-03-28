#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string str;
    cin >> str;

    vector<int> arr;

    for (char c : str) {
        if (c != '+') {
            arr.push_back(c - '0');
        }
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (i != arr.size() - 1) {
            cout << arr[i] << "+";
            continue;
        }
        cout << arr[i] << endl; 
    }
    return 0;
}