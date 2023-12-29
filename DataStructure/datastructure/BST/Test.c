/*************************************************************************
	> File Name: Test.c
	> Author: 
	> Mail: 
	> Created Time: Wed 15 Nov 2023 12:46:47 PM CST
 ************************************************************************/

#include "SQT.h"

void TestTree(){
    Tree* ptree = TreeInit();
    TreeInsert(ptree, 1);
    TreeInsert(ptree, 2);
    TreeInsert(ptree, 1);
    TreeInsert(ptree, 3);
    TreeInsert(ptree, -1);
    TreeInsert(ptree, -2);
    printf("%d\n", ptree->n);

    PreOrder(ptree->root);
    printf("\n");
    InOrder(ptree->root);
    printf("\n");
    PostOrder(ptree->root);
    printf("\n");
    LeveLOrder(ptree->root);
    printf("\n");
    Treeclear(ptree);
    ptree = NULL;
}

int main(){
    /*srand((unsigned)time(NULL));
    //TestTree();
    Tree *ptree = TreeInit();
    for(int i = 0; i < 10; i++){
        int val = rand() % 100;
        TreeInsert(ptree, val);
        printf("insert val = %d\n", val);
        TreeGList(ptree->root);
        printf("\n");
    }
    InOrder(ptree->root);
    printf("\n");
    Treeclear(ptree);
    ptree = NULL;
    */
    

    int numsize = 0;
    char str[100] = {0};
    scanf("%[^\n]", str);
    Tree *ptree = TreeInit();
    ptree->root = build(str, &numsize);
    ptree->n = numsize;
    PreOrder2(ptree->root);
    printf("\n");
    InOrder2(ptree->root);
    printf("\n");
    PostOrder2(ptree->root);
    printf("\n");
    printf("ptree->size: %d\n", ptree->n);
    return 0;
}
