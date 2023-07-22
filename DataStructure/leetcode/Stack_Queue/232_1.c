/*************************************************************************
	> File Name: 232_1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Jul 2023 10:19:01 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct {
    int *data;
    int top;
} MyStack;

MyStack* myStackCreate(int n){
    MyStack *s = (MyStack *)malloc(sizeof(MyStack));
    s->data = (int *)malloc(sizeof(int) * n);
    s->top = -1;
    return s;
}

void myStackPush(MyStack *s, int val){
    if(!s)return;
    s->data[++s->top] = val;
    return;
}

bool myStackEmpty(MyStack *s){
    if(!s)return true;
    return s->top == -1;
}

int myStackPop(MyStack *s){
    if(myStackEmpty(s))return 0;
    s->top--;
    return s->data[s->top + 1];
}

int myStackTop(MyStack *s){
    if(myStackEmpty(s))return 0;
    return s->data[s->top];
}

void myStackFree(MyStack *s){
    if(!s)return ;
    free(s->data);
    free(s);
    return;
}

typedef struct {
//入队栈，出队栈
    MyStack *s1, *s2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
    q->s1 = myStackCreate(100);
    q->s2 = myStackCreate(100);
    return q;
}

void myQueuePush(MyQueue* obj, int x) {
    if(!obj)return;
    myStackPush(obj->s1, x);
    return;
}

int myQueuePop(MyQueue* obj) {
    if(!obj)return 0;
    if(myStackEmpty(obj->s1))return 0;
    if(myStackEmpty(obj->s2)){
        int m = obj->s1->top;
        for(int i = m; ~i; i--){
            myStackPush(obj->s2, obj->s1->data[i]);
        }
        obj->s1->top = -1;
        int n = obj->s2->top - 1;
        for(int j = n, k = 0; ~j; j--, k++){
            obj->s1->data[k] = obj->s2->data[j];
            obj->s1->top = k ;
        }
    }else {
        for(int i = 0 ; i < obj->s1->top; i++){
            obj->s1->data[i] = obj->s1->data[i + 1];
        }
        obj->s1->top--;
    }
    obj->s2->top--;
    return obj->s2->data[obj->s2->top + 1];
}

int myQueuePeek(MyQueue* obj) {
    if(!obj)return 0;
    if(myStackEmpty(obj->s1))return 0;
    if(myStackEmpty(obj->s2)){
        int m = obj->s1->top;
        for(int i = m; ~i; i--){
            myStackPush(obj->s2, obj->s1->data[i]);
        }
    }
    return obj->s2->data[obj->s2->top ];
}

bool myQueueEmpty(MyQueue* obj) {
    if(!obj)return false;
    return myStackEmpty(obj->s1);
}

void myQueueFree(MyQueue* obj) {
    if(!obj)return;
    myStackEmpty(obj->s1);
    myStackEmpty(obj->s2);
    free(obj);
    return;
}
