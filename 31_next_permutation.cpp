class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        
        // Find the first element that is smaller than its next element
        while (i >= 0 && nums[i] >= nums[i + 1])
            i--;
        
        // Find the element just larger than nums[i]
        if (i >= 0) {
            int j = n - 1;
            while (j > i && nums[j] <= nums[i])
                j--;
            swap(nums[i], nums[j]);
        }
        
        // Reverse the suffix to get the next permutation
        reverse(nums.begin() + i + 1, nums.end());
    }
};
