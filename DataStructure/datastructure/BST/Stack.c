/*************************************************************************
	> File Name: Stack.c
	> Author: 
	> Mail: 
	> Created Time: Wed 15 Nov 2023 01:00:49 PM CST
 ************************************************************************/

#include "SQT.h"

Stack* StackInit(){
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if(s == NULL){
        perror("malloc fail");
        exit(-1);
    }
    s->data = NULL;
    s->top = -1;
    s->capacity = 0;
    return s;
}

void CheckCapacity(Stack* s){
    assert(s);
    if(s->capacity == s->top + 1){
        int newCapacity = s->capacity == 0 ? 4 : s->capacity * 2;
        Node** pst = (Node**)realloc(s->data, sizeof(Node*) * newCapacity);
        if(pst == NULL){
            perror("realloc fail");
            exit(-1);
        }
        s->data = pst;
        s->capacity = newCapacity;
    }
}

void StackPush(Stack *s, Node* val){
    assert(s);
    CheckCapacity(s);
    s->data[++s->top] = val;
}

void StackPop(Stack *s){
    assert(s);
    assert(s->data);
    s->top--;
    return;
}

bool StackEmpty(Stack *s){
    assert(s);
    return s->top == -1;
}

Node* StackTop(Stack *s){
    assert(s);
    assert(s->data);
    return s->data[s->top];
}

void StackClear(Stack *s){
    if(!s)return;
    free(s->data);
    free(s);
}
