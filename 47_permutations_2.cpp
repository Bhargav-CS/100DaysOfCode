class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentPermutation;
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        
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
            if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]))
                continue;
            
            currentPermutation.push_back(nums[i]);
            used[i] = true;
            backtrack(nums, result, currentPermutation, used);
            used[i] = false;
            currentPermutation.pop_back();
        }
    }
};
