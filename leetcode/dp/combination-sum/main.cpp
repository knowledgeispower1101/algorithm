class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        dfs(candidates, target, 0, result, current);
        return result;
    }

    void dfs(vector<int>& candidates, int target, int start,
             vector<vector<int>> &result, vector<int> &current) {

        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) continue;

            current.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i, result, current);
            current.pop_back();
        }
    }
};