class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        
        return isMirror(root->left, root->right);
    }
    
    bool isMirror(TreeNode* leftNode, TreeNode* rightNode) {
        if (leftNode == nullptr && rightNode == nullptr)
            return true;
        if (leftNode == nullptr || rightNode == nullptr)
            return false;
        
        return (leftNode->val == rightNode->val) &&
               isMirror(leftNode->left, rightNode->right) &&
               isMirror(leftNode->right, rightNode->left);
    }
};
