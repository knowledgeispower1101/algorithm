#include <iostream>
using namespace std;

int main(){
    int n;
    int result = 0;
    cin >> n;
    int p, v, t;
    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if (p + v + t >= 2) {
            result++;
        };
    }
    cout << result << endl;
    return 0;
}