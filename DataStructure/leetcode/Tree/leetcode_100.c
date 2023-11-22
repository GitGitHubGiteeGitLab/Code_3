/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/*
如果两个二叉树都为空，则两个二叉树相同。如果两个二叉树中有且只有一个为空，则两个二叉树一定不相同。

如果两个二叉树都不为空，那么首先判断它们的根节点的值是否相同，若不相同则两个二叉树一定不同，若相同，再分别判断两个二叉树的左子树是否相同以及右子树是否相同。这是一个递归的过程，因此可以使用深度优先搜索，递归地判断两个二叉树是否相同。
*/
//PreOrder（深度优先遍历） + 特殊边界条件。
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL){
        return true;
    }else if(p == NULL || q == NULL){
        return false;//p == NULL && q == NULL这种情况已经被排除在外
    }else if(p->val != q->val){
        return false;
    }else{
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}