/*************************************************************************
	> File Name: Queue.h
	> Author: 
	> Mail: 
	> Created Time: Tue 14 Nov 2023 12:48:12 PM CST
 ************************************************************************/

#ifndef _QUEUE_H
#define _QUEUE_H

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
#include<stdbool.h>
//Tree
typedef struct Node{
    struct Node *lchild;
    struct Node *rchild;
    int data;
}Node;

typedef struct Tree{
    Node *root;
    int n;//结点个数
}Tree;

Tree *TreeInit();
void TreeInsert(Tree *ptree, int val);
void PreOrder(Node *root);
void InOrder(Node *root);
void PostOrder(Node *root);
void PreOrder2(Node *root);
void InOrder2(Node *root);
void PostOrder2(Node *root);
void LeveLOrder(Node *root);
void TreeGList(Node *root);
Node *build(const char *str, int *numsize);
void Treeclear(Tree *ptree);

//Queue
typedef Node* DataType;
typedef struct QNode{
    struct QNode *next;
    DataType val;
}QNode;

typedef struct Queue{
    QNode *phead, *ptail;
    int size;
}Queue;

void QueueInit(Queue *pq);
void QueuePush(Queue *pq, DataType x);
void QueuePop(Queue* pq);
DataType QueueFront(Queue *pq);
DataType QueueBack(Queue *pq);
int QueueSize(Queue *pq);
bool QueueEmpty(Queue *pq);
void QueueDestroy(Queue *pq);

//Stack
typedef struct Stack{
    Node **data;
    int top, capacity;
}Stack;

Stack* StackInit();
void StackPush(Stack *s, Node* val);
void StackPop(Stack *s);
bool StackEmpty(Stack *s);
Node* StackTop(Stack *s);
void StackClear(Stack *s);
#endif
