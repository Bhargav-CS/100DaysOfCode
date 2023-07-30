struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }

private:
    TreeNode* build(vector<int>& preorder, int preStart, int preEnd,
                    vector<int>& inorder, int inStart, int inEnd) {
        if (preStart > preEnd || inStart > inEnd)
            return nullptr;

        int rootValue = preorder[preStart];
        int rootIndexInorder = inStart;

        while (rootIndexInorder <= inEnd && inorder[rootIndexInorder] != rootValue)
            rootIndexInorder++;

        int leftSubtreeSize = rootIndexInorder - inStart;

        TreeNode* root = new TreeNode(rootValue);
        root->left = build(preorder, preStart + 1, preStart + leftSubtreeSize, inorder, inStart, rootIndexInorder - 1);
        root->right = build(preorder, preStart + leftSubtreeSize + 1, preEnd, inorder, rootIndexInorder + 1, inEnd);

        return root;
    }
};
