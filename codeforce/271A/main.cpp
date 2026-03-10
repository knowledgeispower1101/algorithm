#include <iostream>
using namespace std;
bool check(int x) {
    int arr[10] = {0};
    while (x > 0) {
        arr[x % 10]++;
        x /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 1) return false;
    }
    return true;
}
int main() {
    int input = 0;
    cin >> input;
    input++;
    while (!check(input)) {
        input++;
    }
    cout << input << endl;
    return 0;
}