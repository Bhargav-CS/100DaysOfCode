/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;
        
        return getHeight(root) != -1;
    }
    
private:
    int getHeight(TreeNode* node) {
        if (node == nullptr)
            return 0;
        
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);
        
       
        if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1)
            return -1;
        
        
        return max(leftHeight, rightHeight) + 1;
    }
};
