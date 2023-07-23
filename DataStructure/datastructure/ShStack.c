/*************************************************************************
	> File Name: ShStack.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Jul 2023 09:16:20 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//结构定义
typedef struct ShStack{
    int* data;
    int size, top0, top1; 
}ShStack;

//初始化
ShStack *initShStack(int n){
    ShStack *sh = (ShStack *)malloc(sizeof(ShStack));
    sh->data = (int *)malloc(sizeof(int) * n);
    sh->size = n;
    sh->top0 = -1;
    sh->top1 = n;
    return sh;
}

//入栈
int push(ShStack *sh, int index, int val){
    //judge
    if(!sh)return 0;
    if(sh->top0 + 1 == sh->top1)return 0;
    //插入并更新结构
    if(index){
        sh->data[--sh->top1] = val;
    }else {
        sh->data[++sh->top0] = val;
    }
    return 1;
}

//判空
int empty(ShStack *sh, int index){
    if(index){
        return sh->top1 == sh->size;
    }else {
        return sh->top0 == -1;
    }
}

//出栈
int pop(ShStack *sh, int index){
    //judge
    if(!sh)return 0;
    if(empty(sh, index))return 0;
    if(index){
        sh->top1++;
    }else{
        sh->top0--;
    }
    return 1;
}

//清空
void clear(ShStack *sh){
    if(!sh)return;
    if(sh->data)free(sh->data);
    free(sh);
    return;
}

int Top(ShStack *s, int index);

void output(ShStack *sh, int index){
    if(!sh)return;
    if(empty(sh, index))return;
    printf("Top of Stack%d: %d\n", index, Top(sh, index));
    if(index){
        for(int i = sh->top1; i < sh->size; i++){
            printf("%d ", sh->data[i]);
        }
    }else{
        for(int i = sh->top0; ~i; i--){
            printf("%d ", sh->data[i]);
        }
    }
    printf("\n\n");
}

//插看队首
int Top(ShStack *sh, int index){
    if(empty(sh, index))return -1;
    if(index){
        return sh->data[sh->top1];
    }else {
        return sh->data[sh->top0];
    }
}

int main(){
    srand((unsigned)time(NULL));
    ShStack *sh = initShStack(20);
    int op, val, index;
    for(int i = 0; i < 40; i++){
        op = rand() % 4;
        index = rand() % 2;
        switch(op){
            case 0:
            case 1:
            case 2: 
                    printf("Push into Stack%d\n", index);
                    val = rand() % 100;
                    push(sh, index, val);
                    break; 
            case 3:
                    printf("Pop from Stack%d\n", index);
                    pop(sh, index);
                    break;
        }
        output(sh, index);
    }
    return 0;
}

