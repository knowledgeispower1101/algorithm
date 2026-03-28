#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int peopleLiveIn, roomSpace;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> peopleLiveIn >> roomSpace;
        if (roomSpace - peopleLiveIn >= 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
