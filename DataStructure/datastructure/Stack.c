/*************************************************************************
	> File Name: Stack.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 09:14:41 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//结构定义
typedef struct Stack{
    int* data;
    int size, top; 
}Stack;

//初始化
Stack *initStack(int n){
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->data = (int *)malloc(sizeof(int) * n);
    s->size = n;
    s->top = -1;
    return s;
}

//入栈
int push(Stack *s, int val){
    //judge
    if(!s || !s->data)return 0;
    if(s->top + 1== s->size)return 0;
    
    //插入并更新结构
    s->data[++s->top] = val;
    return 1;
}

//判空
int empty(Stack *s){
    return s->top == -1;
}

//出栈
int pop(Stack *s){
    //judge
    if(!s || !s->data)return 0;
    if(empty(s))return 0;
    s->top--;
    return 1;
}

//清空
void clear(Stack *s){
    if(!s)return;
    if(s->data)free(s->data);
    free(s);
    return;
}

int top(Stack *s);

void output(Stack *s){
    if(!s)return;
    if(empty(s))return;
    printf("Top: %d\n", top(s));
    for(int i = s->top; i >= 0; i--){
        printf("%d ", s->data[i]);
    }
    printf("\n\n");
}

//插看队首
int top(Stack *s){
    if(empty(s))return -1;
    return s->data[s->top];
}

int main(){
    srand((unsigned)time(NULL));
    Stack *s = initStack(20);
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
