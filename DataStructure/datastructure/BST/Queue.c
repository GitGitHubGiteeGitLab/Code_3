/*************************************************************************
	> File Name: Queue.c
	> Author: 
	> Mail: 
	> Created Time: Tue 14 Nov 2023 12:53:43 PM CST
 ************************************************************************/
#include "SQT.h"

void QueueInit(Queue *pq){
    assert(pq);
    pq->phead = pq->ptail = NULL;
    pq->size = 0;
}

static QNode* CreateNewQNode(DataType x){
    QNode *newQNode = (QNode *)malloc(sizeof(QNode));
    if(!newQNode){
        perror("malloc fail");
        exit(-1);
    }
    newQNode->next = NULL;
    newQNode->val = x;
    return newQNode;
}

void QueuePush(Queue *pq, DataType x){
    assert(pq);
    QNode *newQNode = CreateNewQNode(x);
    if(QueueEmpty(pq)){
        pq->phead = pq->ptail = newQNode;
    }else{
        pq->ptail->next = newQNode;
        pq->ptail = newQNode;
    }
    pq->size += 1;
}
void QueuePop(Queue* pq){
    assert(pq);
    assert(pq->phead);
    QNode *next = pq->phead->next;
    free(pq->phead);
    pq->phead = next;
    if(pq->phead == NULL)pq->ptail = NULL;
    pq->size -= 1;
}

DataType QueueFront(Queue *pq){
    assert(pq);
    assert(pq->phead);
    return pq->phead->val;
}

DataType QueueBack(Queue *pq){
    assert(pq);
    assert(pq->phead);
    return pq->ptail->val;
}
int QueueSize(Queue *pq){
    assert(pq);
    return pq->size;
}
bool QueueEmpty(Queue *pq){
    assert(pq);
    return pq->phead == NULL;
}

void QueueDestroy(Queue *pq){
    assert(pq);
    QNode *cur = pq->phead;
    while(cur){
        QNode *next = cur->next;;
        free(cur);
        cur = next;
    }
    pq->phead = pq->ptail = NULL;
    pq->size = 0;
}
