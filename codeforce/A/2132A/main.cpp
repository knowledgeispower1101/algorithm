#include<iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        int init_len;
        cin >> init_len;
        string init_str;
        cin >> init_str;
        int format_len;
        cin >> format_len;
        string format_str;
        cin >> format_str;
        string order;
        cin >> order;
        string result;
        for (int i = 0; i < order.size(); i++) {
            if (order[i] == 'V') {
                init_str.insert(init_str.begin(), format_str[i]);
            } else {
                init_str.push_back(format_str[i]);
            }
        }
        cout << init_str << endl;
    }
    return 0;
}