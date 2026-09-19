 void inorder(struct TreeNode* root, int* arr, int* idx) {
    if (root == NULL) return;

    inorder(root->left, arr, idx);
    arr[*idx] = root->val;
    (*idx)++;
    inorder(root->right, arr, idx);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(1000 * sizeof(int)); // max nodes assumed <=1000
    *returnSize = 0;
    inorder(root, arr, returnSize);
    return arr;
}