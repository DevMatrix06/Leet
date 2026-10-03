class Solution {
public:
    bool isMirror(TreeNode* leftTree, TreeNode* rightTree) {
        if(!leftTree && !rightTree) return true;
        if(!leftTree || !rightTree) return false;

        return leftTree->val == rightTree->val &&
               isMirror(leftTree->left, rightTree->right) &&
               isMirror(leftTree->right, rightTree->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;

        return isMirror(root->left, root->right);
    }
};