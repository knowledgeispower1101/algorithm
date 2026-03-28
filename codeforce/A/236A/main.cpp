#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    bool seen[26] = {false};
    int count = 0;

    for(char c : str){
        if(!seen[c-'a']){
            seen[c-'a'] = true;
            count++;
        }
    }

    cout << ((count % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
}