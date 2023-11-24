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
    vector<vector<int>> levelOrder(TreeNode* root) {
       std::vector<std::vector<int>> vec;
       std::queue<TreeNode *> que;
       if(root == nullptr){
           return vec;
       }
       //广度优先遍历是基础，在此之上进行优化
       que.push(root);
       while(!que.empty()){
           //_level_count：记录每一层的结点个数
           int _level_count = que.size();
           std::vector<int> tmp;
           while(_level_count > 0){
                TreeNode *node = que.front();
                que.pop();
                tmp.push_back(node->val);
                if(node->left != nullptr)que.push(node->left);
                if(node->right != nullptr)que.push(node->right);
                _level_count--;//循环要有更新表达式，否则会陷入死循环
            }
            vec.push_back(tmp);
       }
       return vec;
    }
    
};