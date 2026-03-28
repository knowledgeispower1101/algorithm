#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, k;
    int result = 0;
    vector<int> arr;
    cin >> n >> k;
    arr.resize(n);
    int grade;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) result++;
    }
    if (result == n) {
        cout << 0 << endl;
        return 0;
    }
    result = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= arr[k - 1] && arr[i] != 0) result++;
    }
    cout << result << endl;
    return 0;
}