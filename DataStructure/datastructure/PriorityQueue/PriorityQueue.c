/*************************************************************************
	> File Name: PriorityQueue.c
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Nov 2023 09:53:52 AM CST
 ************************************************************************/

#include "PriorityQueue.h"
//名字不能起tmp,pop时会和pop中的tmp重名，造成巨大错误
#define swap(x, y){\
                  int z = x;\
                  x = y;\
                  y = z;\
                  }
/*
void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
*/
priority_queue* init(int n){
    priority_queue *q = (priority_queue *)malloc(sizeof(priority_queue));
    q->data = (int *)malloc(sizeof(int) * (n + 1));
    q->size = n;
    q->cnt = 0;
    return q;
}

//big heap
int push(priority_queue *q, int val){
    if(!q)return 0;
    if(q->cnt == q->size)return 0;
    //root : 1
    ++q->cnt;
    q->data[q->cnt] = val;
    int idx = q->cnt;
    while(idx >> 1 >= 1 && q->data[idx] > q->data[idx >> 1]){
        swap(q->data[idx], q->data[idx >> 1]);
        idx >>= 1;
    }
    return 1;
}
int pop(priority_queue *q){
    if(!q)return 0;
    if(empty(q))return 0;
    //root: 1
    swap(q->data[1], q->data[q->cnt]);
    //q->data[1] = q->data[q->cnt];
    q->cnt--;
    //root: 1
    int idx = 1;
    while((idx << 1) <= q->cnt){
        int tmp = idx;
        int l = idx << 1;
        int r = idx << 1 | 1;
        if(q->data[tmp] < q->data[l])tmp = l;
        if(r <= q->cnt && q->data[tmp] < q->data[r])tmp = r;
        if(tmp == idx)break;
        //swap(&q->data[idx], &q->data[tmp]);
        swap(q->data[idx], q->data[tmp]);
        idx <<= 1;
    }
    return 1;
}
int empty(priority_queue *q){
    return q->cnt == 0;
}
int top(priority_queue *q){
    //root : 1
    return q->data[1];
}
void clear(priority_queue *q){
    //q == NULL, q->data: NULL->data(wrong)
    if(!q)return;
    //first free(q->data) then free(q)
    free(q->data);//q->data == NULL  is OK ; (free(NULL);) is valid;
    free(q);
}
void output(priority_queue *q){
    if(!q)return;
    //root == 1
    for(int i = 1; i <= q->cnt; i++){
        printf("%d ", q->data[i]);
    }
    printf("\n");
    printf("\n");
    return;
}
