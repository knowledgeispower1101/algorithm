#include <iostream>
#include <string>
using namespace std;

void arrange(string& s) {
    for (size_t i = 0; i + 1 < s.size(); i++) {
        if (s[i] == 'B' && s[i+1] == 'G') {
            swap(s[i], s[i+1]);
            i++;
        }
    }
}

int main() {
    int len, time;
    string str;

    cin >> len >> time;
    cin >> str;

    while (time--) {
        arrange(str);
    }

    cout << str << endl;
}