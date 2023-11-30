/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root == NULL)return NULL;
    //翻转左子树
    invertTree(root->left);
    //翻转右子树
    invertTree(root->right);
    //创建第三个变量用于交换左右子树
    struct TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    return root; 
}