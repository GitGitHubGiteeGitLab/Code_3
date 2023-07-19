/*************************************************************************
	> File Name: linklist.c
	> Author: 
	> Mail: 
	> Created Time: Sun 16 Jul 2023 09:21:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//结构定义
//结点定义
typedef struct Node{
    int data;
    struct Node *next;
}Node;

//链表定义
typedef struct linklist{
    Node head; //虚拟头结点
    int len;
}linklist;

//结构操作
//初始化，插入，删除， 输出，清空

//结点初始化
Node *getNewNode(int val){
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;
    node->next = NULL;
    return node;
}

//链表初始化
linklist *initLinklist(){
    linklist *l =(linklist *)malloc(sizeof(linklist));
    l->head.next = NULL;
    l->len = 0;
    return l;
}

int insert(linklist *l, int pos, int val){
    //传参判断
    if(!(l))return 0;
    if(pos < 0 || pos > l->len)return 0;
    
    //插入操作
    Node *p = &(l->head);
    for(int i = 0; i < pos; i++){//走pos步
        p = p->next;
    }
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = val;
    new_node->next = p->next;
    p->next = new_node;
    
    //更新结构
    l->len += 1;
    return 1;
}

int deleteNode(linklist *l, int pos){
    //参数判断
    if(!(l) || !(l->head.next))return 0;
    if(pos < 0 || pos >= l->len)return 0;

    Node *p = &(l->head);
    //走pos步
    for(int i = 0; i < pos; i++){
        p = p->next;
    }
    Node *q = p->next;
    p->next = q->next;//断手
    free(q);

    //更新结构
    l->len -= 1;
    return 1;
}

void output(linklist *l){
    //参数判断
    if(!(l))return;

    printf("\033[32mList: [");
    int flag = 0;
    for(Node *p = l->head.next; p; p = p->next){//没有用长度和计数器
        if(flag == 1)printf("->");
        printf("%d", p->data);
        flag = 1;
    }
    printf("]\n\033[0m");
    printf("\n");
    return;
}

void clear(linklist *l){
    Node *p = l->head.next, *q;
    while(p){
        q = p->next;
        free(p);
        p = q;
    }
    free(l);
    return;
}



int main(){
    srand(time(0));
    linklist *l = initLinklist();
    int op, val, pos;//pos就是ind(index), 从0开始，head后面是结点0；
    for(int i = 0; i < 20; i++){
        //位置0本身不合法，实际使用中会一直出现空表，pos都是合法位置 1到l->len
        op = rand() % 5;
        pos = rand() % (l->len + 1) ;
        switch(op){
            case 0:
            case 1:
            case 2: 
                    printf("insert to linklist\n");
                    val = rand() % 100;
                    insert(l, pos, val);
                    break;
            case 3:
            case 4: 
                    printf("delete from linklist\n");
                    deleteNode(l, pos);
                    break;
        }
        output(l);
    }
    clear(l);
    return 0;
}
