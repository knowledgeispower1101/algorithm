#include<iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
   
    while (tc--) {
        string str;
        int len;
        cin >> len >> str;

        int result = 0, count = 0;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '.') {
                count++;
            }
            if (j > 0 && j < str.size() - 1 && str[j - 1] == '.' && str[j + 1] == '.' && str[j] == '.') {
                result = 2;
            }
        }
        if (result == 0) {  
            cout << count << endl;
        } else cout << result << endl;
    }
    return 0;
}