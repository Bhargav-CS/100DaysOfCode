
//  Definition for a binary tree node.
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> seen;
        return findSum(root, k, seen);
    }
    
    bool findSum(TreeNode* node, int k, unordered_set<int>& seen) {
        if (node == nullptr) {
            return false;
        }
        
        if (seen.count(k - node->val)) {
            return true;
        }
        
        seen.insert(node->val);
        
        return findSum(node->left, k, seen) || findSum(node->right, k, seen);
    }
};
