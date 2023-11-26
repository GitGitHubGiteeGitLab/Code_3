/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        std::vector<std::vector<int>> vec;
        std::queue<TreeNode *> que;
        if(root == nullptr){
            return vec;
        }
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            std::vector<int> tmp;
            while(size > 0){
                TreeNode *node = que.front();
                que.pop();//不能掉
                tmp.push_back(node->val);
                if(node->left)que.push(node->left);
                if(node->right)que.push(node->right);
                size--;
            }
            vec.push_back(tmp);
        }
        std::reverse(vec.begin(), vec.end());
        return vec;
    }
};