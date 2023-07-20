/*************************************************************************
	> File Name: Queue.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 09:14:41 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//结构定义
typedef struct Queue{
    int* data;
    int size, cnt, head, tail; 
}Queue;

//初始化
Queue *initQueue(int n){
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->data = (int *)malloc(sizeof(int) * n);
    q->size = n;
    q->cnt = q->head = q->tail = 0;
}

//入队
int push(Queue *q, int val){
    //judge
    if(!q || !q->data)return 0;
    if(q->cnt == q->size)return 0;
    
    //插入并更新结构
    q->data[q->tail++] = val;
    q->tail %= q->size;
    q->cnt++;
    return 1;
}

//判空
int empty(Queue *q){
    return q->cnt == 0;
}

//出队
int pop(Queue *q){
    //judge
    if(!q || !q->data)return 0;
    if(empty(q))return 0;
    q->head++;
    q->head %= q->size;
    q->cnt--;
    return 1;
}

//清空
void clear(Queue *q){
    if(!q)return;
    if(q->data)free(q->data);
    free(q);
    return;
}

int front(Queue *q);

void output(Queue *q){
    if(!q)return;
    if(empty(q))return;
    printf("Front: %d\n", front(q));
    for(int i = 0, j = q->head; i < q->cnt; i++){
        printf("%d ", q->data[j++]);
        j %= q->size;
    }
    printf("\n\n");
}

//插看队首
int front(Queue *q){
    if(empty(q))return -1;
    return q->data[q->head];
}

int main(){
    srand((unsigned)time(NULL));
    Queue *q = initQueue(20);
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
