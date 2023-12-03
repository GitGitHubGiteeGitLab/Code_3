/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //sta是栈<---用top维护
void construct(struct TreeNode* root, char** paths, int* returnSize, int sta[100], int top){
    //root为空就返回
    if(!root)return;
    if(root->left == NULL && root->right == NULL){
        char *tmp = (char *)malloc(sizeof(char) * 500);
        //len记录偏移量
        int len = 0;
        //将叶节点之前的结点记入路径
        for(int i = 0; i < top; i++){
            len += sprintf(tmp + len,"%d->", sta[i]);
        }
        //"%d"包含字符'\0'，因为"%d"是空终止字符串
        sprintf(tmp + len, "%d", root->val);
        paths[(*returnSize)++] = tmp;
    }else{
        sta[top++] = root->val;
        //递归建立左子树路径
        construct(root->left, paths, returnSize, sta, top);
        //递归建立右子树路径
        construct(root->right, paths, returnSize, sta, top);
    }
}

char** binaryTreePaths(struct TreeNode* root, int* returnSize) {
    char **paths = (char**)malloc(sizeof(char*) * 100);
    *returnSize = 0;
    //注意sta元素类型为int
    int sta[101] = {'\0'};
    //建立路径
    construct(root, paths, returnSize, sta, 0);
    return paths;
}