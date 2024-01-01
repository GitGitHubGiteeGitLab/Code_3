/*************************************************************************
	> File Name: Test.c
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Nov 2023 11:29:01 PM CST
 ************************************************************************/

#include "PriorityQueue.h"


int main(){
    srand((unsigned)time(NULL));
    priority_queue* q = init(10);
    #define MAX_OP  10
    for(int i = 0; i < MAX_OP; i++){
        int val = rand() % 100;
        printf("push %d to priority_queue = %d\n", val, push(q, val));
        output(q);
    }
    while(q->cnt > 0){
        printf("%d ", top(q));
        printf("pop = %d\n", pop(q));
    }
    clear(q);
    q = NULL;
    return 0;
}


