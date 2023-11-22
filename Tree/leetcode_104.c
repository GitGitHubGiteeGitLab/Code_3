/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
int maxDepth(struct TreeNode* root) {
    //递归的边界条件，遇到了空结点。
    if(root == NULL)return 0;
    //分别计算左右子树的高度
    int left = maxDepth(root->left) + 1;
    int right = maxDepth(root->right) + 1;
    return (left > right ? left : right);
}