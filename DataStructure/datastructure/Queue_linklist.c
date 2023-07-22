/*************************************************************************
	> File Name: Queue_linklist.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Jul 2023 02:49:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//结构定义

typedef struct ListNode{
    int data;
    struct ListNode *next;
}ListNode;

typedef struct Queue{
    struct ListNode hnode, *front, *rear;
    int size;
}Queue;

//初始化
Queue *initQueue(){
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->hnode.next = NULL;
    q->front = q->rear = &q->hnode;
    q->size = 0;
    return q;	
}

//入队
int push(Queue *q, int val){
    //judge
    if(!q)return 0;
    
    //尾插法
    ListNode *node = malloc(sizeof(ListNode));
    node->data = val;
    node->next = q->rear->next;
    q->rear->next = node;
    q->rear = node;
    q->size += 1;
    return 1;
}

//判空
int empty(Queue *q){
    return q->front->next  == NULL;
}

//出队
int pop(Queue *q){
    //judge
    if(!q)return 0;
    if(empty(q))return 0;
    ListNode *node = q->front->next;
    q->front->next = node->next;
    if(q->rear == node)q->rear = q->front;
    free(node);
    q->size -= 1;
    return 1;
}

//清空
void clear(Queue *q){
    if(!q)return;
    if(!empty(q)){
        ListNode *p = q->front->next;
        while(p){
            ListNode *node = p->next;
            free(p);
            p = node->next;
        }
    }
    free(q);
    return;
}

int front(Queue *q);

void output(Queue *q){
    if(!q)return;
    if(empty(q))return;
    printf("Front: %d\n", front(q));
    for(ListNode *p = q->front->next; p; p = p->next){
        printf("%d ", p->data);
    }
    printf("\n\n");
}

//插看队首
int front(Queue *q){
    if(empty(q))return -1;
    return q->front->next->data;        
}

int main(){
    srand((unsigned)time(NULL));
    Queue *q = initQueue();
    int op, val;
    for(int i = 0; i < 20; i++){
        op = rand() % 4;
        switch(op){
            case 0:
            case 1:
            case 2: 
                    printf("Push into Queue\n");
                    val = rand() % 100;
                    push(q, val);
                    break; 
            case 3:
                    printf("Pop from Queue\n");
                    pop(q);
                    break;
        }
        output(q);
    }
    return 0;
}

