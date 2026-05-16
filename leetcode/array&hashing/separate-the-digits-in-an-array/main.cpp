class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) { 
        vector<int> out;

        for(int i = nums.size()-1; i >= 0; i--){
            int n = nums[i];

            while(n > 0){
                out.push_back(n % 10);
                n /= 10;
            }
        }

        reverse(out.begin(), out.end());

        return out;
    }
};