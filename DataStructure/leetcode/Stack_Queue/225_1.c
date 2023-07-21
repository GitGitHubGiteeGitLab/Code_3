/*************************************************************************
	> File Name: 225_1.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 03:36:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
    int *data;
    int size, cnt, head, tail;
}MyQueue;

MyQueue* myQueueCreate(int n){
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
    q->data = (int *)malloc(sizeof(int) * n);
    q->size = n;
    q->cnt = q->head = q->tail = 0;
    return q;
}

void myQueuePush(MyQueue *q, int val){
    if(!q || !q->data)return;
    if(q->cnt == q->size)return;

    q->data[q->tail++] = val;
    q->tail %= q->size;
    q->cnt++;
    return;
}

bool myQueueEmpty(MyQueue *q){
    return q->cnt == 0;
}

int myQueuePop(MyQueue *q){
    if(!q || !q->data)return 0;
    if(myQueueEmpty(q))return 0;

    int tmp = q->data[q->head];
    q->head++;
    q->head %= q->size;
    q->cnt--;
    return tmp;
}

int myQueueFront(MyQueue *q){
    if(!q || !q->data)return 0;
    if(myQueueEmpty(q))return 0;
    return q->data[q->head];
}

void myQueueFree(MyQueue *q){
    if(!q)return ;
    if(q->data)free(q->data);
    free(q);
    return;
}

typedef struct {
    MyQueue *queue1, *queue2;
} MyStack;


MyStack* myStackCreate() {
    MyStack *s = (MyStack *)malloc(sizeof(MyStack));
    s->queue1 = myQueueCreate(100);//题目要求
    s->queue2 = myQueueCreate(100);
    return s;
}

//queue2永远为空，先给到queue2,再把queue1中的值接到queue2中，再把queue2，queue1互换，memset(queue2)
void myStackPush(MyStack* obj, int x) {
    if(obj->queue1->cnt == obj->queue1->size)return;
    myQueuePush(obj->queue2, x);
    for(int i = 0; i < obj->queue1->cnt; i++){
        myQueuePush(obj->queue2, obj->queue1->data[i]);
    }
    MyQueue *q = obj->queue1;
    obj->queue1 = obj->queue2;
    //以下两行可以替换成
    //free(q);
    //obj->queue2 = myQueueCreate(100);
    obj->queue2 = q;
    obj->queue2->head = obj->queue2->tail = obj->queue2->cnt = 0;
    return;
}

int myStackPop(MyStack* obj) {
    if(!obj)return 0;
    return myQueuePop(obj->queue1);
}

int myStackTop(MyStack* obj) {
    if(!obj)return 0;
    return myQueueFront(obj->queue1);
}

bool myStackEmpty(MyStack* obj) {
    if(!obj)return 0;
    return myQueueEmpty(obj->queue1);
}

void myStackFree(MyStack* obj) {
    if(!obj)return;
    myQueueFree(obj->queue1);
    myQueueFree(obj->queue2);
    free(obj);
    return;
}
