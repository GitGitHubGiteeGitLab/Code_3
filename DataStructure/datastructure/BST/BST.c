/*************************************************************************
	> File Name: BST.c
	> Author: 
	> Mail: 
	> Created Time: Tue 14 Nov 2023 07:59:49 PM CST
 ************************************************************************/
#include "SQT.h"
/*
typedef struct Node{
    struct Node *lchild;
    struct Node *rchild;
    int data;
}Node;
*/


Node *getNewNode(int val){
    Node *node = (Node *)malloc(sizeof(Node));
    if(node == NULL){
        perror("malloc fail");
        exit(-1);
    }
    node->data = val;
    node->lchild = NULL;  
    node->rchild = NULL; 
    return node;
}

Tree *TreeInit(){
    Tree *ptree = (Tree *)malloc(sizeof(Tree));
    if(ptree == NULL){
        perror("malloc fail");
        exit(-1);
    }
    ptree->root = NULL;
    ptree->n = 0;
    return ptree;
}

Node *NodeInsert(Node *root, int val, int *pflag){
    if(root == NULL){
        root = getNewNode(val);
        *pflag = 1;
        return root;
    }

    if(root->data == val)return root;

    if(root->data < val){
        root->rchild = NodeInsert(root->rchild, val, pflag);
    }else{
        root->lchild = NodeInsert(root->lchild, val, pflag); 
    }
    return root;
}

void TreeInsert(Tree *ptree, int val){
    assert(ptree);
    int flag = 0;
    ptree->root = NodeInsert(ptree->root, val, &flag);
    ptree->n += flag;
}

void PreOrder(Node *root){
    if(root != NULL){
        printf("%d ", root->data);
        PreOrder(root->lchild);
        PreOrder(root->rchild);
    }
}

void InOrder(Node *root){
    if(root != NULL){
        InOrder(root->lchild);
        printf("%d ", root->data);
        InOrder(root->rchild);
    }
}

void PostOrder(Node *root){
    if(root != NULL){
        PostOrder(root->lchild);
        PostOrder(root->rchild);
        printf("%d ", root->data);
    }
}

void PreOrder2(Node *root){
    if(root != NULL){
        printf("%c ", root->data);
        PreOrder2(root->lchild);
        PreOrder2(root->rchild);
    }
}

void InOrder2(Node *root){
    if(root != NULL){
        InOrder2(root->lchild);
        printf("%c ", root->data);
        InOrder2(root->rchild);
    }
}

void PostOrder2(Node *root){
    if(root != NULL){
        PostOrder2(root->lchild);
        PostOrder2(root->rchild);
        printf("%c ", root->data);
    }
}

void LeveLOrder(Node *root){
    Queue q;
    QueueInit(&q);
    QueuePush(&q, root);
    while(!QueueEmpty(&q)){
        Node *node = QueueFront(&q);
        printf("%d ", node->data);
        if(node->lchild != NULL)QueuePush(&q, node->lchild);
        if(node->rchild != NULL)QueuePush(&q, node->rchild);
        QueuePop(&q);
    }    
}
//树的广义表表示法
//树的广义表表示方法本质上是前序遍历。
void TreeGList(Node *root){
    if(root == NULL)return;
    printf("%d", root->data);
    if(root->lchild == NULL && root->rchild == NULL)return;
    printf("(");
    TreeGList(root->lchild);
    printf(", ");
    TreeGList(root->rchild);
    printf(")");
}

void clearNode(Node *root){
    if(root == NULL)return;
    clearNode(root->lchild);
    clearNode(root->rchild);
    free(root);
}

void Treeclear(Tree *ptree){
    clearNode(ptree->root);
    ptree->root = NULL;
    free(ptree);
}


/*广义表->二叉树*/
Node *build(const char *str, int *numsize){
    Node *node = NULL;
    *numsize = 0;
    Node *root = NULL;
    Stack *s = StackInit();
    int flag = 0;
    while(str[0]){
        switch(str[0]){
            case ' ':
                break;
            case '('://next是lchild
                StackPush(s, node);
                flag = 1;
                break;
            case ','://next是rchild
                flag = 0;
                break;
            case ')'://一个完备事件结束
                StackPop(s);
                break;
            default :
                node = getNewNode(str[0]);
                if(root == NULL){
                    root = node;
                    (*numsize)++;
                    break;
                }
                if(flag == 1)StackTop(s)->lchild = node;
                else StackTop(s)->rchild = node;
                (*numsize)++;
                break;
        }
        str++;
    }
    StackClear(s);
    s = NULL;
    return root;
}
