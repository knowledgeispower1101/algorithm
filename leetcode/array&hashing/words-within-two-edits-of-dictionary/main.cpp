class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries,
                                vector<string>& dictionary) {
        vector<string> result;
        for (string q : queries) {
            bool can_change = false;
            for (string d : dictionary) {
                int diff = 0;
                for (int i = 0; i < q.size(); i++) {
                    if (q[i] != d[i]) diff++;
                }
                if (diff <= 2) {
                    can_change = true;
                    break;
                }
            }
            if (can_change) {
                result.push_back(q);
                continue;
            };
        }
        return result;
    }
};