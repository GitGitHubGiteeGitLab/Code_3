/*************************************************************************
	> File Name: 232_2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Jul 2023 12:23:16 PM CST
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
     MyStack *inStack, *outStack;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
    q->inStack = myStackCreate(100);
    q->outStack = myStackCreate(100);
    return q;
}

bool myQueueEmpty(MyQueue* obj) ;

void myQueuePush(MyQueue* obj, int x) {
    if(!obj)return ;
    myStackPush(obj->inStack, x);
    return;
}

void in_out(MyQueue *obj){
    if(myStackEmpty(obj->outStack)){
        int i = obj->inStack->top;
        do{
         obj->outStack->data[++obj->outStack->top] = obj->inStack->data[i];
         i--;
        }while(~i);
    }
    return ;
}

int myQueuePop(MyQueue* obj) {
    if(!obj)return 0;
    if(myStackEmpty(obj->inStack)) return 0;

    in_out(obj);
    int i = 0;
    do{
        obj->inStack->data[i] = obj->inStack->data[i + 1];
        i++;
    }while(i < obj->inStack->top);
    int front = myStackTop(obj->outStack);
    obj->inStack->top -= 1;
    obj->outStack->top -= 1;
    return front;
}

int myQueuePeek(MyQueue* obj) {
    if(!obj)return 0;
    if(myStackEmpty(obj->inStack)) return 0;

    in_out(obj);
    return myStackTop(obj->outStack);
}

bool myQueueEmpty(MyQueue* obj) {
    if(!obj)return true;
    return  myStackEmpty(obj->inStack);
}

void myQueueFree(MyQueue* obj) {
    if(!obj)return;
    myStackFree(obj->inStack);
    myStackFree(obj->outStack);
    free(obj);
    return;
}
