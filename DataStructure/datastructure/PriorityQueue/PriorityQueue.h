/*************************************************************************
	> File Name: PriorityQueue.h
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Nov 2023 11:28:21 PM CST
 ************************************************************************/

#ifndef _PRIORITYQUEUE_H
#define _PRIORITYQUEUE_H
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//big heap
//root 编号为1，不是0
typedef struct priority_queue{
    int *data;
    int cnt;
    int size;
}priority_queue;

priority_queue* init(int n);
int push(priority_queue *q, int val);
int pop(priority_queue *q);
int empty(priority_queue *q);
int top(priority_queue *q);
void clear(priority_queue *q);
void output(priority_queue *q);
#endif
