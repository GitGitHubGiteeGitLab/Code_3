/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root == NULL)return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    //若无左子树返回右子树的高度+1
    if(left == 0){
        return right + 1;
    }
    //若无右子树返回左子树的高度+1
    if(right == 0){
        return left + 1;
    }
    //既有左子树又有右子树min{left, right} + 1
    return (left < right ? left : right) + 1;
}