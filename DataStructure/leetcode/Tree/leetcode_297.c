/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/** Encodes a tree to a single string. */

void PreOrder(struct TreeNode *root, char *ret){
    if(root == NULL){
        //ret后面追加
        strcat(ret, "-,");
        //要返回
        return;
    }
    //临时存储转化为字符串的root->val
    char tmp[10] = "";
    sprintf(tmp, "%d,", root->val);
    //ret后面继续追加
    strcat(ret, tmp);
    //处理左右子树（分治）
    PreOrder(root->left, ret);
    PreOrder(root->right, ret);
}

char* serialize(struct TreeNode* root) {
    //为空返回空的表示形式
    if(!root){
        return "-";
    }
    //N 取值要大于等于40003，不然会出现heap-buffer-overflow
    #define N 40003
    char *ret = (char*)malloc(sizeof(char) * N);
    //初始化清空
    memset(ret, 0, N * sizeof(char));
    PreOrder(root, ret);
    return ret;
}

struct TreeNode *buildTree(char *data){
    //使用中间变量存储字符串分解的结果
    char *tmp = strtok(data, ",");
    //递归返回条件，判断该节点值是否为NULL，是的话进行返回
    if(!strcmp(tmp, "-")){
        return NULL;
    }
    //生成一个新的节点，用于承接字符串分解出的节点值
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    //atoi
    root->val = atoi(tmp);
    //分治，递归左子树和右子树
    root->left = buildTree(NULL);
    root->right = buildTree(NULL);

    return root;
}

/** Decodes your encoded data to tree. */
struct TreeNode* deserialize(char* data) {
    //strcmp函数进行比较，检查是否为空
    if(!strcmp(data, "-")){
        return NULL;
    }
    //函数要传参
    return buildTree(data);
}

// Your functions will be called as such:
// char* data = serialize(root);
// deserialize(data);