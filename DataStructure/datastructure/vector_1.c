/*************************************************************************
	> File Name: vector.c
	> Author: 
	> Mail: 
	> Created Time: Sun 16 Jul 2023 03:16:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//顺序表的结构定义
typedef struct vector{
    int *data;
    int len, size;
}vector;

//结构操作：初始化， 插入， 删除，打印，扩容， 清空

vector* init( int n){
    vector * v = (vector *)malloc(sizeof(vector));
    if(!(v))return NULL;
    v->data = (int *)malloc(sizeof(int) * n);
    v->size = n;
    v->len = 0;
    if(!(v->data))return NULL;
    return v;
}

int expand(vector *v){
    int *exp_v = (int *)realloc(v->data, sizeof(int) * (v->size + 4));
    if(!(exp_v))return 0;
    v->data = exp_v;
    v->size += 4;
    return 1;
}

//pos就是数组下标
int insert(vector *v, int pos, int val){
    //传参检查
    if(v == NULL)return 0;
    if(pos < 0 || pos > v->len)return 0;
    if(v->size == v->len){
        expand(v);
        printf("\033[31mexpand vector\n\033[0m");
    }

    //插入
    for(int i = v->len; i > pos; i--){
        v->data[i] = v->data[i - 1];
    }
    v->data[pos] = val;
    
    //更新结构
    v->len += 1;
    return 1;
}

int deleteVal(vector *v, int pos){
    //传参检查
    if(!(v))return 0;
    if(pos < 0 || pos >= v->len)return 1;

    //删除
    for(int i = pos; i < v->len; i++){
        v->data[i] = v->data[i + 1];
    }

    //更新结构
    v->len -= 1;
    return 1;
}

void output(vector *v){
    printf("\033[36mVector: [");
    for(int i = 0; i < v->len; i++){
        i && printf(" ");
        printf("%d", v->data[i]);
    }
    printf("]\n\033[m");
    printf("\n");
    return;
}

void clear(vector *v){
    free(v->data);
    free(v);
    return;
}

int main(){
    srand(time(0));
    vector *v = init(1);
    int op = 0, pos;
    for(int i = 0; i < 20; i++){
        op = rand() % 4;
        // 0 1 2 insert
        // 3 delete
        switch(op){
            case 0: 
            case 1: 
            case 2: 
                   printf("insert to vector\n");
                   int val = rand() % 100;
                   pos = rand() % (v->len + 1);
                   insert(v, pos, val);
                   output(v);
                   break;
            case 3:
                   printf("delete vector\n");
                   //加一的必要性，若为空表，则对零取模，引发浮点异常
                   pos = rand() % (v->len + 1);
                   deleteVal(v, pos);
                   output(v);
                   break;
        }
    }
    clear(v);
    return 0;
}
