class Solution {
public:
    bool check(TreeNode* leftTree, TreeNode* rightTree) {
        if(leftTree == NULL && rightTree == NULL)
            return true;

        if(leftTree == NULL || rightTree == NULL)
            return false;

        if(leftTree->val != rightTree->val)
            return false;

        return check(leftTree->left, rightTree->right) &&
               check(leftTree->right, rightTree->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;

        return check(root->left, root->right);
    }
};