class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentPermutation;
        vector<bool> used(nums.size(), false);
        
        backtrack(nums, result, currentPermutation, used);
        return result;
    }
    
private:
    void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& currentPermutation, vector<bool>& used) {
        if (currentPermutation.size() == nums.size()) {
            result.push_back(currentPermutation);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) {
                currentPermutation.push_back(nums[i]);
                used[i] = true;
                backtrack(nums, result, currentPermutation, used);
                used[i] = false;
                currentPermutation.pop_back();
            }
        }
    }
};
