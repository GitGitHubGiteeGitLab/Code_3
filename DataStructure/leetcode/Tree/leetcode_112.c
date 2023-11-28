/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(root == NULL)return false;//结点为空，说明这条路径不符合要求
    if(root->left == NULL 
    && root->right == NULL
    && root->val == targetSum){
        return true;//找到叶子节点后，比对值是否相等
    }
    //有真即为真用 逻辑或||
    //更新传递实参targetSum的值为targetSum - root->val
    return hasPathSum(root->left, targetSum - root->val) 
        || hasPathSum(root->right, targetSum - root->val);
    
}