/*************************************************************************
	> File Name: 225_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 10:54:41 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

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

//给非空push,或两者皆空给queue1 push
void myStackPush(MyStack* obj, int x) {
    if(myQueueEmpty(obj->queue1)){
        myQueuePush(obj->queue2, x);
    }else {
        myQueuePush(obj->queue1, x);
    }
}
bool myStackEmpty(MyStack* obj) ;
int myStackPop(MyStack* obj) {
    if(!obj)return 0;
    if(myStackEmpty(obj))return 0;
    MyQueue *p = myQueueEmpty(obj->queue1) ? obj->queue2 : obj->queue1;
    MyQueue *q = myQueueEmpty(obj->queue1) ? obj->queue1 : obj->queue2;//q指向空
    int element = myQueuePop(p);
    while(!myQueueEmpty(p)){
        myQueuePush(q, element);
        element = myQueuePop(p);
    }
    return element;
}

//和myStackPop基本一致
int myStackTop(MyStack* obj) {
    if(!obj)return 0;
    if(myStackEmpty(obj))return 0;
    MyQueue *p = myQueueEmpty(obj->queue1) ? obj->queue2 : obj->queue1;
    MyQueue *q = myQueueEmpty(obj->queue1) ? obj->queue1 : obj->queue2;//q指向空
    int element = myQueuePop(p);
    while(!myQueueEmpty(p)){
        myQueuePush(q, element);
        element = myQueuePop(p);
    }
    myQueuePush(q, element);
    return element;
}

bool myStackEmpty(MyStack* obj) {
    if(!obj)return true;
    MyQueue *p = myQueueEmpty(obj->queue1) ? obj->queue2 : obj->queue1 ;//p指向非空
    if(myQueueEmpty(p))return true;
    return false;
}

void myStackFree(MyStack* obj) {
    if(!obj)return;
    myQueueFree(obj->queue1);
    myQueueFree(obj->queue2);
    free(obj);
    return ;
}
