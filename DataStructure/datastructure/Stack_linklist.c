/*************************************************************************
	> File Name: Stack_linklist.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 09:00:36 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



//结构定义
typedef struct ListNode{
    struct ListNode *next;
    int data;
}ListNode;

typedef struct Stack{
    struct ListNode hnode; 
    int size; 
}Stack;

//初始化
Stack *initStack(){
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->hnode.next = NULL;
    s->size = 0;
    return s;
}

//入栈
int push(Stack *s, int val){
    //judge
    if(!s)return 0;
    
    //插入并更新结构
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->data = val;
    p->next = s->hnode.next;
    s->hnode.next = p;
    s->size += 1;
    return 1;
}

//判空
int empty(Stack *s){
    return s->hnode.next == NULL;
}

//出栈
int pop(Stack *s){
    //judge
    if(!s)return 0;
    if(empty(s))return 0;
    
    ListNode *p = s->hnode.next;
    s->hnode.next = p->next;
    free(p);
    s->size -= 1;
    return 1;
}

//清空
void clear(Stack *s){
    if(!s)return;
    if(s->hnode.next){
        ListNode *p = s->hnode.next;
        while(p){
            ListNode *q = p;
            p = p->next;
            free(q);
        }
    }
    free(s);
    return;
}

int top(Stack *s);

void output(Stack *s){
    if(!s)return;
    if(empty(s))return;
    printf("Top: %d\n", top(s));
    for(ListNode *p = s->hnode.next; p; p = p->next){
        printf("%d ", p->data);
    }
    printf("\n\n");
}

//插看队首
int top(Stack *s){
    if(empty(s))return -1;
    return s->hnode.next->data;
}

int main(){
    srand((unsigned)time(NULL));
    Stack *s = initStack();
    int op, val;
    for(int i = 0; i < 20; i++){
        op = rand() % 4;
        switch(op){
            case 0:
            case 1:
            case 2: 
                    printf("Push into Stack\n");
                    val = rand() % 100;
                    push(s, val);
                    break; 
            case 3:
                    printf("Pop from Stack\n");
                    pop(s);
                    break;
        }
        output(s);
    }
    return 0;
}

