/*************************************************************************
	> File Name: 160.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 01:49:39 PM CST
 ************************************************************************/

#include<stdio.h>
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
  };

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA == NULL || headB == NULL)return NULL;
    struct ListNode *a = headA, *b = headB;
    //two for loop, choose a as the judge
    for(a = headA; a; a = a->next){
        //update b
        for(b = headB; b; b = b->next){
            if(a == b)return a;
        }
    }
    return NULL;
}
