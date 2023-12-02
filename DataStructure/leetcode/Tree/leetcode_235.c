/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    //二叉搜索树的特点：左小右大，root->val介于两者之间可相等就找到了公共祖先
    if(root == NULL){
        return NULL;
        //<=: 要考虑到root和root->left root和root->right的情况
    }else if((p->val <= root->val && root->val <= q->val)
    || (q->val <= root->val && root->val <= p->val)){
        return root;
    }else if(p->val > root->val && q->val > root->val){
        return lowestCommonAncestor(root->right, p, q);
    }else{
        return lowestCommonAncestor(root->left, p, q);
    }
}