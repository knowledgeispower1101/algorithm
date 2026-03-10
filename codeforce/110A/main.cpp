#include<iostream>
using namespace std;
bool isLuckyNumber(int x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}
int main() {
    long long x;
    int count = 0;
    cin >> x;
    while (x > 0) {
        int digit = x % 10;
        if (digit == 4 || digit == 7) count++;
        x /= 10;
    }
    cout << (isLuckyNumber(count) ? "YES" : "NO") << endl;
    return 0;
}