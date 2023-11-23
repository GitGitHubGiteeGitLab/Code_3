/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//指针做参数带回返回值
//用标志值反应树是or不是平衡二叉树
int calDepth(struct TreeNode *root, int *flag){
    if(root == NULL)return 0;
    int left = calDepth(root->left, flag);
    int right = calDepth(root->right, flag);
    if(abs(left - right) > 1){
        *flag = 0;
    }
    return (int)fmax(left, right) + 1;
}

bool isBalanced(struct TreeNode* root) {
    int flag = 1;//假设是平衡二叉树
    calDepth(root, &flag);
    return flag;
}