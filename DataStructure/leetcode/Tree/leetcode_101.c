/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL){
        return true;
    }else if(p == NULL || q == NULL){
        return false;//p == NULL && q == NULL这种情况已经被排除在外
    }else if(p->val != q->val){
        return false;
    }else{
        return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
    }
}

//把isSameTree中的p->left,q->left改为p->left, q->right以及p->right, q->right改为p->right, q->left

bool isSymmetric(struct TreeNode* root) {
    if(!root)return false;
    return isSameTree(root->left, root->right);
}