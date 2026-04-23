class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(')');
            } else if (s[i] == '[') {
                st.push(']');
            } else if (s[i] == '{') {
                st.push('}');
            } else if (st.empty() || s[i] != st.top()) return false;
            if (st.top() == s[i] && st.size() > 0) {
                st.pop();
            } 
        }
        return st.size() == 0 ? true : false;
    }
};