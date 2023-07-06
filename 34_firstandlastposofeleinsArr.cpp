#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int first = -1, last = -1;
    
    // Find the first occurrence of target
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            first = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    // Find the last occurrence of target
    left = 0;
    right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            last = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return {first, last};
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4, 5};
    int target = 3;
    
    vector<int> result = searchRange(nums, target);
    
    cout << "First occurrence: " << result[0] << endl;
    cout << "Last occurrence: " << result[1] << endl;
    
    return 0;
}